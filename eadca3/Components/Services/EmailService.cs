using System;
using System.Net.Mail;

namespace eadca3.EmailServiceNamespace
{    
    public class EmailService 
    {
        public async Task SendMessage(string sender, string subject, string body) 
        {
            try
            {
                using (var emailMessage = new MailMessage())
                {
                    Console.WriteLine("trying to add message");
                    emailMessage.To.Add(sender);
                    emailMessage.Subject = subject;
                    emailMessage.Body = body;

                    using (var smtp = new SmtpClient("X00173636@mytudublin.ie")) {
                        smtp.Port = 587; // Gmail SMTP port
                        smtp.UseDefaultCredentials = false;
                     //   smtp.Credentials = new NetworkCredential("your.email@gmail.com", "your_password"); // Your Gmail credentials
                        smtp.EnableSsl = true;

                        Console.WriteLine("Sending email...");
                        await smtp.SendMailAsync(emailMessage);
                        Console.WriteLine("Email sent successfully!");
                    }
                }
            }
            catch (Exception e) {
                Console.WriteLine("Error:", e.Message);
            }
        }
    }
}
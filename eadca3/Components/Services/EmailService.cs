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
                    emailMessage.To.Add(sender);
                    emailMessage.Subject = subject;
                    emailMessage.Body = body;

                    using (var smtp = new SmtpClient("X00173636@mytudublin.ie")) {
                        await smtp.SendMailAsync(emailMessage);
                    }
                }
            }
            catch (Exception e) {
                Console.WriteLine("Error:", e.Message);
            }
        }
    }
}
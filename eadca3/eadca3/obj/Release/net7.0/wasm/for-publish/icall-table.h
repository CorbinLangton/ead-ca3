#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
216,
224,
225,
226,
227,
228,
229,
230,
231,
232,
235,
236,
407,
408,
410,
438,
439,
440,
460,
461,
462,
463,
561,
562,
563,
566,
603,
604,
605,
608,
610,
612,
614,
619,
627,
628,
629,
630,
631,
632,
633,
634,
635,
636,
637,
638,
639,
640,
641,
642,
643,
645,
646,
647,
648,
649,
650,
651,
743,
744,
745,
746,
747,
748,
749,
750,
751,
752,
753,
754,
755,
756,
757,
758,
759,
761,
762,
763,
764,
765,
766,
767,
893,
902,
905,
907,
912,
913,
915,
916,
920,
921,
923,
924,
927,
928,
929,
932,
934,
937,
939,
941,
1012,
1014,
1016,
1025,
1026,
1027,
1028,
1030,
1037,
1038,
1039,
1040,
1041,
1049,
1050,
1051,
1055,
1056,
1058,
1062,
1063,
1064,
1335,
1530,
1531,
8764,
8765,
8767,
8768,
8769,
8770,
8771,
8773,
8775,
8777,
8778,
8787,
8789,
8793,
8794,
8796,
8798,
8800,
8811,
8820,
8821,
8823,
8824,
8825,
8826,
8827,
8829,
8831,
9872,
9876,
9878,
9879,
9880,
9881,
10023,
10024,
10025,
10026,
10046,
10047,
10048,
10050,
10093,
10144,
10146,
10157,
10158,
10159,
10160,
10462,
10463,
10468,
10469,
10499,
10522,
10528,
10535,
10545,
10548,
10636,
10645,
10647,
10648,
10654,
10667,
10687,
10688,
10696,
10698,
10705,
10706,
10709,
10711,
10716,
10722,
10723,
10730,
10732,
10744,
10747,
10748,
10749,
10760,
10769,
10775,
10776,
10777,
10779,
10780,
10798,
10800,
10814,
10837,
10838,
10856,
10861,
10891,
10892,
11342,
11343,
11415,
11494,
11744,
11745,
11751,
11752,
11753,
11759,
11829,
12223,
12224,
12633,
12634,
13562,
13583,
13590,
13592,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 216,
ves_icall_System_Array_InternalCreate,
// token 224,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 225,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 226,
ves_icall_System_Array_CanChangePrimitive,
// token 227,
ves_icall_System_Array_FastCopy_raw,
// token 228,
ves_icall_System_Array_GetLength_raw,
// token 229,
ves_icall_System_Array_GetLowerBound_raw,
// token 230,
ves_icall_System_Array_GetGenericValue_icall,
// token 231,
ves_icall_System_Array_GetValueImpl_raw,
// token 232,
ves_icall_System_Array_SetGenericValue_icall,
// token 235,
ves_icall_System_Array_SetValueImpl_raw,
// token 236,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 407,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 408,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 410,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 438,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 439,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 440,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 460,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 461,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 462,
ves_icall_System_Enum_InternalGetCorElementType,
// token 463,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 561,
ves_icall_System_Environment_get_ProcessorCount,
// token 562,
ves_icall_System_Environment_get_TickCount,
// token 563,
ves_icall_System_Environment_get_TickCount64,
// token 566,
ves_icall_System_Environment_FailFast_raw,
// token 603,
ves_icall_System_GC_GetCollectionCount,
// token 604,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 605,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 608,
ves_icall_System_GC_SuppressFinalize_raw,
// token 610,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 612,
ves_icall_System_GC_GetGCMemoryInfo,
// token 614,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 619,
ves_icall_System_Object_MemberwiseClone_raw,
// token 627,
ves_icall_System_Math_Acos,
// token 628,
ves_icall_System_Math_Acosh,
// token 629,
ves_icall_System_Math_Asin,
// token 630,
ves_icall_System_Math_Asinh,
// token 631,
ves_icall_System_Math_Atan,
// token 632,
ves_icall_System_Math_Atan2,
// token 633,
ves_icall_System_Math_Atanh,
// token 634,
ves_icall_System_Math_Cbrt,
// token 635,
ves_icall_System_Math_Ceiling,
// token 636,
ves_icall_System_Math_Cos,
// token 637,
ves_icall_System_Math_Cosh,
// token 638,
ves_icall_System_Math_Exp,
// token 639,
ves_icall_System_Math_Floor,
// token 640,
ves_icall_System_Math_Log,
// token 641,
ves_icall_System_Math_Log10,
// token 642,
ves_icall_System_Math_Pow,
// token 643,
ves_icall_System_Math_Sin,
// token 645,
ves_icall_System_Math_Sinh,
// token 646,
ves_icall_System_Math_Sqrt,
// token 647,
ves_icall_System_Math_Tan,
// token 648,
ves_icall_System_Math_Tanh,
// token 649,
ves_icall_System_Math_FusedMultiplyAdd,
// token 650,
ves_icall_System_Math_Log2,
// token 651,
ves_icall_System_Math_ModF,
// token 743,
ves_icall_System_MathF_Acos,
// token 744,
ves_icall_System_MathF_Acosh,
// token 745,
ves_icall_System_MathF_Asin,
// token 746,
ves_icall_System_MathF_Asinh,
// token 747,
ves_icall_System_MathF_Atan,
// token 748,
ves_icall_System_MathF_Atan2,
// token 749,
ves_icall_System_MathF_Atanh,
// token 750,
ves_icall_System_MathF_Cbrt,
// token 751,
ves_icall_System_MathF_Ceiling,
// token 752,
ves_icall_System_MathF_Cos,
// token 753,
ves_icall_System_MathF_Cosh,
// token 754,
ves_icall_System_MathF_Exp,
// token 755,
ves_icall_System_MathF_Floor,
// token 756,
ves_icall_System_MathF_Log,
// token 757,
ves_icall_System_MathF_Log10,
// token 758,
ves_icall_System_MathF_Pow,
// token 759,
ves_icall_System_MathF_Sin,
// token 761,
ves_icall_System_MathF_Sinh,
// token 762,
ves_icall_System_MathF_Sqrt,
// token 763,
ves_icall_System_MathF_Tan,
// token 764,
ves_icall_System_MathF_Tanh,
// token 765,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 766,
ves_icall_System_MathF_Log2,
// token 767,
ves_icall_System_MathF_ModF,
// token 893,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 902,
ves_icall_RuntimeType_make_array_type_raw,
// token 905,
ves_icall_RuntimeType_make_byref_type_raw,
// token 907,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 912,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 913,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 915,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 916,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 920,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 921,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 923,
ves_icall_System_RuntimeType_getFullName_raw,
// token 924,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 927,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 928,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 929,
ves_icall_RuntimeType_GetFields_native_raw,
// token 932,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 934,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 937,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 939,
ves_icall_RuntimeType_GetName_raw,
// token 941,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1012,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1014,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1016,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1025,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1026,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1027,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1028,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1030,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1037,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1038,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1039,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1040,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1041,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1049,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1050,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1051,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1055,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1056,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1058,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1062,
ves_icall_System_String_FastAllocateString_raw,
// token 1063,
ves_icall_System_String_InternalIsInterned_raw,
// token 1064,
ves_icall_System_String_InternalIntern_raw,
// token 1335,
ves_icall_System_Type_internal_from_handle_raw,
// token 1530,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1531,
ves_icall_System_ValueType_Equals_raw,
// token 8764,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8765,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8767,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8768,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8769,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8770,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8771,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8773,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8775,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8777,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8778,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8787,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8789,
mono_monitor_exit_icall_raw,
// token 8793,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8794,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8796,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8798,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8800,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8811,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8820,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8821,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8823,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8824,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8825,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8826,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8827,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8829,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8831,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9872,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9876,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9878,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9879,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9880,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9881,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 10023,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 10024,
ves_icall_System_GCHandle_InternalFree_raw,
// token 10025,
ves_icall_System_GCHandle_InternalGet_raw,
// token 10026,
ves_icall_System_GCHandle_InternalSet_raw,
// token 10046,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 10047,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 10048,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 10050,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 10093,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 10144,
mono_object_hash_icall_raw,
// token 10146,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 10157,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 10158,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 10159,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 10160,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10462,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10463,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10468,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10469,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10499,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10522,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10528,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10535,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10545,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10548,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10636,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10645,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 10647,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10648,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10654,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10667,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10687,
ves_icall_reflection_get_token_raw,
// token 10688,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10696,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10698,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10705,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10706,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10709,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10711,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10716,
ves_icall_reflection_get_token_raw,
// token 10722,
ves_icall_get_method_info_raw,
// token 10723,
ves_icall_get_method_attributes,
// token 10730,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10732,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10744,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10747,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10748,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10749,
ves_icall_reflection_get_token_raw,
// token 10760,
ves_icall_InternalInvoke_raw,
// token 10769,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10775,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10776,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10777,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10779,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10780,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10798,
ves_icall_InvokeClassConstructor_raw,
// token 10800,
ves_icall_InternalInvoke_raw,
// token 10814,
ves_icall_reflection_get_token_raw,
// token 10837,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10838,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10856,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10861,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10891,
ves_icall_reflection_get_token_raw,
// token 10892,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11342,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11343,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11415,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11494,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11744,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11745,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11751,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11752,
ves_icall_ModuleBuilder_getToken_raw,
// token 11753,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11759,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11829,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 12223,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 12224,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12633,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12634,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13562,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13583,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13590,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13592,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};

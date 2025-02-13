#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
194,
204,
205,
206,
207,
208,
209,
210,
211,
212,
215,
216,
317,
318,
319,
348,
349,
350,
370,
371,
372,
373,
470,
471,
472,
475,
510,
511,
513,
515,
517,
519,
524,
532,
533,
534,
535,
536,
537,
538,
539,
540,
633,
634,
700,
706,
709,
711,
716,
717,
719,
720,
724,
725,
727,
729,
730,
733,
734,
735,
738,
740,
743,
745,
747,
756,
820,
822,
824,
834,
835,
836,
837,
839,
846,
847,
848,
849,
850,
858,
859,
860,
864,
865,
867,
871,
872,
873,
1152,
1330,
1331,
7074,
7075,
7077,
7078,
7079,
7080,
7081,
7083,
7085,
7087,
7097,
7099,
7104,
7106,
7108,
7110,
7161,
7162,
7164,
7165,
7166,
7167,
7168,
7170,
7172,
8067,
8071,
8073,
8074,
8075,
8076,
8324,
8325,
8326,
8327,
8345,
8346,
8347,
8349,
8389,
8447,
8449,
8451,
8459,
8460,
8461,
8462,
8833,
8836,
8837,
8864,
8882,
8889,
8896,
8907,
8911,
8931,
9005,
9007,
9016,
9018,
9019,
9026,
9040,
9060,
9061,
9069,
9071,
9078,
9079,
9082,
9084,
9089,
9095,
9096,
9103,
9105,
9117,
9120,
9121,
9122,
9133,
9142,
9148,
9149,
9150,
9152,
9153,
9170,
9172,
9186,
9203,
9230,
9260,
9261,
9697,
9789,
9790,
9992,
9993,
10000,
10001,
10002,
10007,
10082,
10463,
10464,
10675,
10685,
11410,
11431,
11433,
11435,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
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
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
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
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
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
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
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
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 194,
ves_icall_System_Array_InternalCreate,
// token 204,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 205,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 206,
ves_icall_System_Array_CanChangePrimitive,
// token 207,
ves_icall_System_Array_FastCopy,
// token 208,
ves_icall_System_Array_GetLengthInternal_raw,
// token 209,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 210,
ves_icall_System_Array_GetGenericValue_icall,
// token 211,
ves_icall_System_Array_GetValueImpl_raw,
// token 212,
ves_icall_System_Array_SetGenericValue_icall,
// token 215,
ves_icall_System_Array_SetValueImpl_raw,
// token 216,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 317,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 318,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 319,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 348,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 349,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 350,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 370,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 371,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 372,
ves_icall_System_Enum_InternalGetCorElementType,
// token 373,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 470,
ves_icall_System_Environment_get_ProcessorCount,
// token 471,
ves_icall_System_Environment_get_TickCount,
// token 472,
ves_icall_System_Environment_get_TickCount64,
// token 475,
ves_icall_System_Environment_FailFast_raw,
// token 510,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 511,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 513,
ves_icall_System_GC_SuppressFinalize_raw,
// token 515,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 517,
ves_icall_System_GC_GetGCMemoryInfo,
// token 519,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 524,
ves_icall_System_Object_MemberwiseClone_raw,
// token 532,
ves_icall_System_Math_Ceiling,
// token 533,
ves_icall_System_Math_Cos,
// token 534,
ves_icall_System_Math_Floor,
// token 535,
ves_icall_System_Math_Log10,
// token 536,
ves_icall_System_Math_Pow,
// token 537,
ves_icall_System_Math_Sin,
// token 538,
ves_icall_System_Math_Sqrt,
// token 539,
ves_icall_System_Math_Tan,
// token 540,
ves_icall_System_Math_ModF,
// token 633,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 634,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 700,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 706,
ves_icall_RuntimeType_make_array_type_raw,
// token 709,
ves_icall_RuntimeType_make_byref_type_raw,
// token 711,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 716,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 717,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 719,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 720,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 724,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 725,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 727,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 729,
ves_icall_System_RuntimeType_getFullName_raw,
// token 730,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 733,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 734,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 735,
ves_icall_RuntimeType_GetFields_native_raw,
// token 738,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 740,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 743,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 745,
ves_icall_RuntimeType_GetName_raw,
// token 747,
ves_icall_RuntimeType_GetNamespace_raw,
// token 756,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 820,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 822,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 824,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 834,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 835,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 836,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 837,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 839,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 846,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 847,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 848,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 849,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 850,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 858,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 859,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 860,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 864,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 865,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 867,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 871,
ves_icall_System_String_FastAllocateString_raw,
// token 872,
ves_icall_System_String_InternalIsInterned_raw,
// token 873,
ves_icall_System_String_InternalIntern_raw,
// token 1152,
ves_icall_System_Type_internal_from_handle_raw,
// token 1330,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1331,
ves_icall_System_ValueType_Equals_raw,
// token 7074,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7075,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7077,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7078,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7079,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7080,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7081,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7083,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7085,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7087,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7097,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7099,
mono_monitor_exit_icall_raw,
// token 7104,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7106,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7108,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7110,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7161,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7162,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7164,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7165,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7166,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7167,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7168,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7170,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7172,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8067,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8071,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8073,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8074,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8075,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8076,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8324,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8325,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8326,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8327,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8345,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8346,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8347,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8349,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8389,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8447,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8449,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8451,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8459,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8460,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8461,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8462,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8833,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8836,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8837,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8864,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8882,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8889,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8896,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8907,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8911,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8931,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9005,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9007,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9016,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9018,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9019,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9026,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9040,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9060,
ves_icall_reflection_get_token_raw,
// token 9061,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9069,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9071,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9078,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9079,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9082,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9084,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9089,
ves_icall_reflection_get_token_raw,
// token 9095,
ves_icall_get_method_info_raw,
// token 9096,
ves_icall_get_method_attributes,
// token 9103,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9105,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9117,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9120,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9121,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9122,
ves_icall_reflection_get_token_raw,
// token 9133,
ves_icall_InternalInvoke_raw,
// token 9142,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9148,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9149,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9150,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9152,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9153,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9170,
ves_icall_InvokeClassConstructor_raw,
// token 9172,
ves_icall_InternalInvoke_raw,
// token 9186,
ves_icall_reflection_get_token_raw,
// token 9203,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9230,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9260,
ves_icall_reflection_get_token_raw,
// token 9261,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9697,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9789,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9790,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9992,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9993,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10000,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10001,
ves_icall_ModuleBuilder_getToken_raw,
// token 10002,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10007,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10082,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10463,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10464,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10675,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10685,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11410,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11431,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11433,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11435,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
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
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};

@interface LAErrorHelper : NSObject

+ (id)errorWithCode:(long long)a0 message:(id)a1 suberror:(id)a2;
+ (id)errorWithCode:(long long)a0 message:(id)a1 moreInfo:(id)a2;
+ (id)silentInternalErrorWithMessage:(id)a0;
+ (BOOL)error:(id)a0 hasCode:(long long)a1;
+ (BOOL)error:(id)a0 hasCode:(long long)a1 subcode:(long long)a2;
+ (id)errorNotSupported;
+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1 message:(id)a2;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)internalErrorWithMessage:(id)a0;
+ (id)missingEntitlementError:(id)a0;
+ (id)parameterErrorWithMessage:(id)a0;
+ (void)raiseExceptionOnError:(id)a0;
+ (id)errorWithCode:(long long)a0 withUnderlyingErrors:(id)a1;
+ (id)redactInternalError:(id)a0;
+ (BOOL)storageError:(id)a0 hasCode:(long long)a1;
+ (id)storageErrorWithCode:(long long)a0 message:(id)a1;
+ (id)storageErrorWithCode:(long long)a0 message:(id)a1 suberror:(id)a2;
+ (id)_errorNotSupportedAction:(id)a0 on:(id)a1;
+ (BOOL)error:(id)a0 hasCodeFromArray:(id)a1;
+ (id)errorDeviceDoesNotSupportAction:(id)a0;
+ (id)errorPlatformDoesNotSupportAction:(id)a0;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1 message:(id)a2 suberror:(id)a3;
+ (id)internalErrorWithMessage:(id)a0 suberror:(id)a1;
+ (id)localizedStringForError:(long long)a0;
+ (id)parameterErrorForMissingOrInvalidObject:(id)a0 name:(const char *)a1;
+ (id)xctErrorWithMessage:(id)a0 suberror:(id)a1;

@end

@interface CKInternalError : CKPrettyError

+ (void)initialize;
+ (id)errorWithCode:(long long)a0 format:(id)a1;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1 format:(id)a2;

@end

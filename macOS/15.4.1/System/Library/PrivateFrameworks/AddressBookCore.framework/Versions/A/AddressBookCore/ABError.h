@interface ABError : NSError

+ (id)errorWithErrno:(int)a0;
+ (id)errorWithErrno;
+ (id)errorWithErrno:(int)a0 userInfo:(id)a1;
+ (id)errorWithErrnoAndUserInfo:(id)a0;
+ (id)ifResultIsNil:(id)a0 setOutputError:(id *)a1 toError:(id)a2;
+ (id)ifResultIsNil:(id)a0 setOutputError:(id *)a1 withBlock:(id /* block */)a2;
+ (id)multipleErrorsErrorWithErrors:(id)a0;
+ (id)recordNotFoundErrorWithUniqueId:(id)a0;

@end

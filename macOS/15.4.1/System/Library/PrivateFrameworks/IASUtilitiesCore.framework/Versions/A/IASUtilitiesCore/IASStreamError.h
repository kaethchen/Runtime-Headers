@interface IASStreamError : NSError

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)localizedDescriptionForCode:(long long)a0;

@end

@interface PKCheckError : NSError

+ (id)errorWithCode:(long long)a0 packageIdentifier:(id)a1 userInfo:(id)a2 recoveryAction:(id /* block */)a3 message:(id)a4;

@end

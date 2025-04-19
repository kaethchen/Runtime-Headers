@interface AuthenticatedOperation : NSObject

+ (void)perform:(id /* block */)a0;
+ (void)performForWindowID:(long long)a0 withAuthorization:(id /* block */)a1;
+ (void)performWithAuthorization:(id /* block */)a0;

@end

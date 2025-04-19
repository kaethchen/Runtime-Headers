@interface CNCDAccessAuthorization : NSObject

+ (BOOL)isAccessGranted;
+ (id)accessGrantedFuture;
+ (BOOL)isAccessGranted:(id *)a0;
+ (void)requestAccessWithCompletionHandler:(id /* block */)a0;
+ (id)resolveFuture:(id)a0;
+ (id)sharedAccessGrantedFuture;

@end

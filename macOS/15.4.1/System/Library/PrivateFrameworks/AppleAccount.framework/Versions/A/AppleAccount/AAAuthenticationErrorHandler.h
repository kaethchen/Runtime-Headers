@interface AAAuthenticationErrorHandler : NSObject

+ (void)handleAuthenticationError:(id)a0 resetAuthenticatedOnAlertFailure:(BOOL)a1 forAccount:(id)a2 inStore:(id)a3 completion:(id /* block */)a4;

@end

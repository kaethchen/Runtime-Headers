@interface PKMacSetupAssistantViewControllerFactory : NSObject

+ (id)new;
+ (id)viewControllerWithProvisioningController:(id)a0 isExpress:(BOOL)a1 selectedCredentials:(id)a2 setupAssistantHost:(id)a3 completion:(id /* block */)a4;

- (id)init;

@end

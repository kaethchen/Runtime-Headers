@interface PHProjectExtensionServiceViewController : PHExtensionServiceViewController

+ (Class)windowClass;
+ (id)expectedPrincipalObjectProtocol;
+ (Class)expectedExtensionContextClass;

- (void)loadView;
- (void)didConnectToExtensionContext:(id)a0;

@end

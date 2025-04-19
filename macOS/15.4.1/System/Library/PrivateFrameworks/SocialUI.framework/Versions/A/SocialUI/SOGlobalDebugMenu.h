@interface SOGlobalDebugMenu : SODebugMenu

@property (readonly) BOOL isInstalled;

+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (id)init;
- (void)update;
- (void)installMenu;

@end

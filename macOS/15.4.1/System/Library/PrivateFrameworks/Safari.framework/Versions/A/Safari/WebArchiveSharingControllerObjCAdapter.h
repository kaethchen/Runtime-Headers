@interface WebArchiveSharingControllerObjCAdapter : NSObject {
    BOOL _registeredForDidLaunchApplicationNotification;
}

@property (readonly, nonatomic) void *controller;

+ (id)mailAppBundleIdentifier;

- (void)dealloc;
- (void)_didLaunchApplication:(id)a0;
- (id)initWithWebArchiveSharingController:(void *)a0;
- (void)registerForDidLaunchApplicationNotification;

@end

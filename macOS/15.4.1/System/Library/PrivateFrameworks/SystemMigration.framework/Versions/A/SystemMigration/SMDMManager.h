@class DMManager;

@interface SMDMManager : NSObject {
    DMManager *_dm;
    struct __DASession { } *_daSession;
}

+ (void)initialize;
+ (id)sharedSMDMManager;

- (id)init;
- (void).cxx_destruct;
- (id)manager;
- (void)tearDown;
- (struct __DASession { } *)daSession;
- (struct __DADisk { } *)copyDiskForDiskIdentifier:(id)a0;

@end

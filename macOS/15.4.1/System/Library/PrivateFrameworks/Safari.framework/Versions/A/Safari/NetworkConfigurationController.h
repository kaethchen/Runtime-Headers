@class NSTimer;

@interface NetworkConfigurationController : NSObject {
    struct __SCDynamicStore { } *_store;
    NSTimer *_notificationTimer;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_postNetworkChangeNotification:(id)a0;

@end

@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SCDAAdvertisementContextManager : NSObject {
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)reset;
- (id)initWithQueue:(id)a0;
- (void)_resetSettingsConnection;
- (id)_settingsConnection;
- (void)pushSCDAAdvertisementContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)triggerABCForType:(id)a0 subType:(id)a1 context:(id)a2;

@end

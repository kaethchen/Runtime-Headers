@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)workQueue;
- (id)createAuthServerWithDelegate:(id)a0;
- (id)createBtleAccessoryBrowser;
- (id)createCHIPAccessoryBrowser;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createIpAccessoryBrowser;

@end

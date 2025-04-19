@class NSString, NSMutableDictionary, NSCondition, NSNetServiceBrowser;

@interface XsanControllerBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSCondition *_bonjour_cv;
    NSMutableDictionary *_b_controllers;
    NSNetServiceBrowser *_b_browser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceDidResolveAddress:(id)a0;
- (id)getControllers;
- (void)startControllerDiscovery;
- (void)stopControllerDiscovery;

@end

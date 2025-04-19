@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APAssistedModeBrowser : NSObject

@property (nonatomic) BOOL isBrowsing;
@property (nonatomic) NSString *instanceName;
@property (nonatomic) NSString *bonjourServiceName;
@property (nonatomic) NSString *bonjourProtocol;
@property (nonatomic) struct BonjourBrowser { } *bonjourBrowser;
@property (nonatomic) id /* block */ deviceFoundHandlerBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> *internalBrowserQueue;
@property (nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)dealloc;
- (id)init;
- (void)stopBrowsing;
- (void)callDeviceFoundHandlerOnce:(id)a0 error:(id)a1;
- (id)getExpectedBonjourService;
- (id)getExpectedServiceInstanceName;
- (int)setupBonjourBrowser;
- (int)startBonjourBrowser;
- (void)startBrowsingFor:(id)a0 withTimeout:(double)a1 deviceFoundHandler:(id /* block */)a2;
- (int)startTimerWithTimeout:(double)a0;
- (void)stopBrowsingWithError:(int)a0;

@end

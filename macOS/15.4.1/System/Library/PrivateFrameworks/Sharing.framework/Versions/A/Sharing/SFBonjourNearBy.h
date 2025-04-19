@class NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_nw_endpoint, OS_nw_listener, OS_nw_browser;

@interface SFBonjourNearBy : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _shouldRestartBrowsing;
    BOOL _shouldRestartAdvertising;
    BOOL _isStopAdvertisingInProgress;
    BOOL _isStopBrowsingInProgress;
    NSString *_localAdvertiserUUIDString;
    NSString *_localBrowserUUIDString;
}

@property (retain) NSObject<OS_nw_listener> *listener;
@property (retain) NSObject<OS_nw_browser> *browser;
@property (readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (retain) NSMutableSet *resultChanges;
@property (retain) NSMutableSet *advertiserAdvs;
@property (retain) NSMutableDictionary *advToBrowserNwToSFendpoints;
@property (retain) NSMutableDictionary *advToBrowserUuidToSFendpoints;
@property (retain) NSMutableDictionary *browserToAdvNwToSFendpoints;
@property (retain) NSMutableDictionary *browserToAdvUuidToSFendpoints;
@property int browserState;
@property int advertiserState;
@property (copy, nonatomic) id /* block */ advertisingStateUpdateHandler;
@property (copy, nonatomic) id /* block */ discoveryStateUpdateHandler;
@property (copy, nonatomic) id /* block */ deviceDidStartScanning;
@property (copy, nonatomic) id /* block */ deviceDidStopScanning;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceDidConnectHandler;
@property (copy, nonatomic) id /* block */ deviceDidDisconnectHandler;
@property (copy, nonatomic) id /* block */ deviceDidReceiveDataHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)connectToDevice:(id)a0;
- (void)disconnectFromDevice:(id)a0;
- (void)_cleanupBrowser;
- (void)_cleanUp;
- (void)_cleanupAdvertiser;
- (id)_endpointForUniqueID:(id)a0;
- (id)_handleConnection:(id)a0 isAdvToBrowserConnection:(BOOL)a1;
- (void)_reportCachedDiscoveryResults;
- (void)_sendAdvMessageWithData:(id)a0 isStart:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_sendMessage:(id)a0 withType:(id)a1 toDevice:(id)a2 completionCallback:(id /* block */)a3;
- (void)_sendMessage:(id)a0 withType:(id)a1 toEndpoint:(id)a2 completionCallback:(id /* block */)a3;
- (void)_startAdvertiser;
- (void)_startBrowser;
- (void)_stopAdvertising;
- (void)_stopBrowser;
- (void)_updateAdvertiserState;
- (void)_updateBrowserState;
- (id)getUniqueServiceNameForAdvertiser;
- (void)handleBrowseResults:(id)a0;
- (BOOL)isLocalEndpoint:(id)a0;
- (id)randomUUID;
- (void)restartDiscovery;
- (BOOL)sendData:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)startAdvertisingWithData:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)startDiscovery;
- (BOOL)stopAdvertisingForData:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopDiscovery;

@end

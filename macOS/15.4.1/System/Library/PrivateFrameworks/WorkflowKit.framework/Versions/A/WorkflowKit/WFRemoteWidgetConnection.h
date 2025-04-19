@class NSString, NSMutableArray, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, OS_xpc_object, WFRemoteWidgetConnectionListenerDelegate, OS_nw_listener, OS_nw_browser;

@interface WFRemoteWidgetConnection : NSObject

@property (nonatomic, getter=isConnectedToDevice) BOOL connectedToDevice;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSObject<OS_xpc_object> *unrepliedWakeEvent;
@property (retain, nonatomic) NSObject<OS_nw_browser> *nwBrowser;
@property (retain, nonatomic) NSObject<OS_nw_listener> *nwListener;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSMutableArray *dataToSend;
@property (weak, nonatomic) id<WFRemoteWidgetConnectionListenerDelegate> listenerDelegate;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) id /* block */ connectionTimeoutHandler;

+ (id)_createAdvertiseParameters;
+ (id)_createBrowseParameters;
+ (id)_createFramer;
+ (id)connectionToDevice:(id)a0;
+ (id)startListeningForIncomingConfigurations;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_tearDownConnection;
- (void)_handleNewConnection:(id)a0;
- (void)sendData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDeviceIdentifier:(id)a0;
- (void)_browserDiscoveredDeviceEndpoint:(id)a0;
- (void)_receiveRequestOnConnection;
- (void)_receiveResponseOnConnection;
- (void)_replyToWakeEvent:(id)a0;
- (void)_sendPendingData;
- (void)_setupWakeHandler;
- (void)sendRemoteConfigurationRequest:(id)a0 completion:(id /* block */)a1;

@end

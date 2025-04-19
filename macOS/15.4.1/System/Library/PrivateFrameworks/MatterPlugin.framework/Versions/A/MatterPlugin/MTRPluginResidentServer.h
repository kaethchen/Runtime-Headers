@class NSString, NSMutableArray, NSObject;
@protocol MTRPluginProtobufMessageTransport, OS_dispatch_queue;

@interface MTRPluginResidentServer : NSObject <MTRPluginProtobufMessageTransportDelegate>

@property (retain) id<MTRPluginProtobufMessageTransport> transport;
@property (retain) NSMutableArray *sessions;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property BOOL running;
@property (readonly, getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_registerForSignificantTimeChangeNotifications;
- (void)_unregisterSessionForSessionID:(id)a0;
- (void)_checkForMaxSessionsLimit;
- (id)_clientSessionForSessionID:(id)a0;
- (void)_deregisterForSignificantTimeChangeNotifications;
- (void)_registerSessionForSessionID:(id)a0 incomingNewMessage:(id)a1;
- (void)messageTransport:(id)a0 handleIncomingMessage:(id)a1;
- (void)removeResidentClientSession:(id)a0;
- (void)timeZoneOrTimeChanged:(id)a0;

@end

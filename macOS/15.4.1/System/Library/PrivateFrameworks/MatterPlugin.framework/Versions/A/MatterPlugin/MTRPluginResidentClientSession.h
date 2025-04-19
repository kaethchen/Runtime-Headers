@class NSUUID, NSDictionary, NSMutableSet, NSDate, NSObject, NSString;
@protocol MTRPluginProtobufMessageTransport, OS_dispatch_queue, OS_dispatch_source;

@interface MTRPluginResidentClientSession : NSObject <MTRDeviceDelegate, MTRDeviceControllerDelegate, MTRPluginProtobufMessageTransportDelegate>

@property (retain) NSUUID *sessionID;
@property (retain) NSDate *timeOfLastActivity;
@property (retain) NSUUID *homeID;
@property (retain) id peerAddress;
@property (retain) NSMutableSet *registeredNodeIDs;
@property (retain) NSMutableSet *subscribedMTRDevices;
@property (retain) id<MTRPluginProtobufMessageTransport> transport;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSDictionary *lastKnownInternalState;
@property (retain) NSObject<OS_dispatch_source> *internalStateUpdateSource;
@property (retain) NSObject<OS_dispatch_source> *deviceBecameActiveSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isSuspended) BOOL suspended;

- (void).cxx_destruct;
- (void)invalidate;
- (id)deviceController;
- (void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void)_registerForMessages;
- (void)device:(id)a0 receivedEventReport:(id)a1;
- (void)device:(id)a0 stateChanged:(unsigned long long)a1;
- (void)deviceBecameActive:(id)a0;
- (void)deviceCachePrimed:(id)a0;
- (void)deviceConfigurationChanged:(id)a0;
- (void)_registerNodeID:(id)a0;
- (void)_unregisterNodeID:(id)a0;
- (void)controller:(id)a0 commissioningComplete:(id)a1 nodeID:(id)a2 metrics:(id)a3;
- (void)controller:(id)a0 commissioningSessionEstablishmentDone:(id)a1;
- (void)controller:(id)a0 readCommissioningInfo:(id)a1;
- (void)controller:(id)a0 statusUpdate:(long long)a1;
- (void)device:(id)a0 internalStateUpdated:(id)a1;
- (id)_deviceNodeMessageForDevice:(id)a0 messageValue:(id)a1;
- (id)_dictionaryFromCommandFields:(id)a0;
- (void)_sendMessageToHomeWithID:(id)a0 messageType:(int)a1 pbCodable:(id)a2 metric:(id)a3 errorBlock:(id /* block */)a4 replyBlock:(id /* block */)a5;
- (id)_validateAndFindDeviceControllerForMessage:(id)a0 deviceControllerMessage:(id *)a1;
- (id)_validateAndFindDeviceControllerMatchingHomeInMessage:(id)a0;
- (id)_validateAndFindDeviceNodeForMessage:(id)a0;
- (void)controller:(id)a0 isSuspended:(BOOL)a1;
- (id)initWithTransport:(id)a0 workQueue:(id)a1 sessionID:(id)a2 homeID:(id)a3 peerAddress:(id)a4;
- (void)messageTransport:(id)a0 handleCloseSession:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceInvokeBatchCommand:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceInvokeCommand:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceReadAttribute:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceReadMultipleAttributes:(id)a1;
- (void)messageTransport:(id)a0 handleDeviceWriteAttribute:(id)a1;
- (void)messageTransport:(id)a0 handleDownloadDiagnosticLog:(id)a1;
- (void)messageTransport:(id)a0 handleGetControllerIsRunning:(id)a1;
- (void)messageTransport:(id)a0 handleGetControllerNodeID:(id)a1;
- (void)messageTransport:(id)a0 handleGetControllerUniqueID:(id)a1;
- (void)messageTransport:(id)a0 handleGetDeviceEstimatedStartTime:(id)a1;
- (void)messageTransport:(id)a0 handleGetDeviceEstimatedSubscriptionLatency:(id)a1;
- (void)messageTransport:(id)a0 handleGetDeviceIsCachePrimed:(id)a1;
- (void)messageTransport:(id)a0 handleGetDeviceState:(id)a1;
- (void)messageTransport:(id)a0 handleUpdateControllerConfig:(id)a1;
- (void)messageTransport:(id)a0 updateTimeOfActivity:(id)a1;

@end

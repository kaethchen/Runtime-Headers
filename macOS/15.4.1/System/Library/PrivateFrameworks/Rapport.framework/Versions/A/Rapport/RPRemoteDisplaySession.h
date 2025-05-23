@class RPRemoteDisplayServer, NSString, NSXPCConnection, NSArray, RPRemoteDisplayDevice, NSData, CUBonjourDevice, NSMutableDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplaySession : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface, RPAuthenticatable, RPMessageable> {
    BOOL _activateCalled;
    NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestRegistrations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (retain, nonatomic) RPRemoteDisplayDevice *daemonDevice;
@property (readonly, nonatomic) unsigned int internalAuthFlags;
@property (nonatomic) BOOL needsAWDL;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) RPRemoteDisplayServer *server;
@property (copy, nonatomic) NSNumber *sessionID;
@property (retain, nonatomic) NSXPCConnection *xpcCnx;
@property (nonatomic) unsigned long long controlFlags;
@property (retain, nonatomic) RPRemoteDisplayDevice *destinationDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) int linkType;
@property (retain, nonatomic) NSArray *allowedMACAddresses;
@property (copy, nonatomic) NSData *pairingInfo;
@property (retain, nonatomic) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly, nonatomic) int passwordTypeActual;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ showPasswordHandler;
@property (copy, nonatomic) id /* block */ hidePasswordHandler;
@property (copy, nonatomic) id /* block */ promptForPasswordHandler;
@property (retain, nonatomic) NSString *serviceType;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendRequestID:(id)a0 request:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)sendRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerEventID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)sendEventID:(id)a0 event:(id)a1 destinationID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)deregisterRequestID:(id)a0;
- (void)remoteDisplayReceivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)_sendEventID:(id)a0 event:(id)a1 destinationID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)_sendRequestID:(id)a0 request:(id)a1 destinationID:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)deregisterEventID:(id)a0;
- (void)remoteDisplayAuthCompleted:(id)a0;
- (void)remoteDisplayPromptForPasswordWithFlags:(unsigned int)a0 throttleSeconds:(int)a1;
- (void)remoteDisplayReceivedEventID:(id)a0 event:(id)a1 options:(id)a2;
- (void)remoteDisplaySessionError:(id)a0;
- (void)remoteDisplayUpdateDataLinkType:(id)a0;
- (void)sendEventID:(id)a0 event:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)tryPassword:(id)a0;

@end

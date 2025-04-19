@class NSXPCListenerEndpoint, NSArray, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AADeviceManager : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    NSMutableDictionary *_deviceDictionary;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _resetOngoing;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (readonly, copy) NSArray *discoveredDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ headGestureUpdatedHandler;
@property (nonatomic) unsigned int headGestureUpdateFlags;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_reset;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_reportError:(id)a0;
- (BOOL)isSystemContext;
- (void)_activate:(BOOL)a0;
- (void)aaServicesRequireReset;
- (void)deviceHeadGestureDetected:(id)a0;
- (void)deviceManagerFoundDevice:(id)a0;
- (void)deviceManagerLostDevice:(id)a0;
- (void)sendDeviceConfig:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (void)sendDeviceConfig:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;

@end

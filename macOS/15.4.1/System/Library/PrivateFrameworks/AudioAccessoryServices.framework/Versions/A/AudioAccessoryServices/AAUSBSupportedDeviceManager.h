@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AAUSBSupportedDeviceManager : NSObject <NSSecureCoding> {
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_reportError:(id)a0;
- (BOOL)isSystemContext;
- (void)_handleServerDied;
- (void)proxCardUserActionOnHeadphone:(id)a0 withAction:(unsigned char)a1 completion:(id /* block */)a2;

@end

@class RBSProcessIdentity, NSString, _EXExtensionIdentity;
@protocol _EXExtensionConfigurationProviding;

@interface _EXExtensionProcessHandle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ innerProcessHandle;
    void /* unknown type, empty encoding */ xpcConnectionLock;
    void /* unknown type, empty encoding */ xpcConnections;
    void /* unknown type, empty encoding */ observersLock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ mainEndpoint;
    void /* unknown type, empty encoding */ libXPCEndpoint;
    void /* unknown type, empty encoding */ sessionEndpoint;
    void /* unknown type, empty encoding */ invalidationLock_invalidated;
    void /* unknown type, empty encoding */ invalidationLock;
    void /* unknown type, empty encoding */ sandboxExtensions;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ assertionAquireCount;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ launchConfiguration;
@property (nonatomic, readonly) struct { unsigned int x0[8]; } auditToken;
@property (nonatomic, readonly) int pid;
@property (nonatomic, retain) void /* unknown type, empty encoding */ launchAssertion;
@property (nonatomic, retain) void /* unknown type, empty encoding */ assertion;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly) BOOL valid;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) id<_EXExtensionConfigurationProviding> configuration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)makeLibXPCConnectionAndReturnError:(id *)a0;
- (id)makeSessionXPCConnection;
- (id)makeXPCConnectionRetainProcess:(BOOL)a0 error:(id *)a1;

@end

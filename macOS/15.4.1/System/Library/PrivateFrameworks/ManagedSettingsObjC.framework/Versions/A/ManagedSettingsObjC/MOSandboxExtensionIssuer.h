@class NSXPCConnection, NSObject;

@interface MOSandboxExtensionIssuer : NSObject

@property (class, readonly, nonatomic) MOSandboxExtensionIssuer *sharedIssuer;

@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)xpcConnection;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (id)fetchSandboxExtensionTokenForPath:(id)a0 readonly:(BOOL)a1;

@end

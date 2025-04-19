@class NSString, NSXPCConnection, NSURL, NSObject;
@protocol OS_dispatch_queue, OSSystemExtensionRequestDelegate;

@interface OSSystemExtensionRequest : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *containingApplication;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<OSSystemExtensionRequestDelegate> delegate;

+ (id)activationRequestForExtension:(id)a0 queue:(id)a1;
+ (id)deactivationRequestForExtension:(id)a0 queue:(id)a1;
+ (id)deactivationRequestForManagedExtension:(id)a0 containingApplication:(id)a1 queue:(id)a2;
+ (id)propertiesRequestForExtension:(id)a0 queue:(id)a1;

- (void).cxx_destruct;
- (void)start;
- (void)tearDown;
- (void)connectToDaemon;
- (void)activatedWithResult:(long long)a0;
- (void)didConnectToDaemon;
- (void)failedWithError:(id)a0;
- (id)initWithIdentifier:(id)a0 containingApplication:(id)a1 queue:(id)a2;
- (id)initWithIdentifier:(id)a0 queue:(id)a1;
- (void)needsUserApproval;
- (void)replyWithProperties:(id)a0;
- (void)requestReplacementActionForExistingExtension:(id)a0 withExtension:(id)a1;

@end

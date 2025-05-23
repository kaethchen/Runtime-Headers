@class NSURL, Protocol, NSDate, NSDictionary, NSObject, NSBundle, NSString, NSUserDefaults, PKHost, NSArray, NSMutableSet, NSXPCConnection, NSUUID;
@protocol OS_dispatch_queue, PKPlugIn, PKCorePlugInProtocol;

@interface PKHostPlugIn : PKPlugInCore <PKPlugInPrivate, NSXPCConnectionDelegate>

@property (retain) PKHost *host;
@property (retain) NSXPCConnection *pluginConnection;
@property (retain) NSObject<OS_dispatch_queue> *_replyQueue;
@property (retain) NSObject<OS_dispatch_queue> *_syncQueue;
@property (retain) NSObject<OS_dispatch_queue> *_startQueue;
@property (retain) id<PKCorePlugInProtocol> service;
@property (retain) id<PKCorePlugInProtocol> syncService;
@property (retain) NSUUID *supersedingUUID;
@property (weak) id<PKPlugIn> supersededBy;
@property (retain) NSUUID *multipleInstanceUUID;
@property (readonly) NSUUID *effectiveUUID;
@property (retain) NSString *serviceExtension;
@property (retain) NSDictionary *discoveryExtensions;
@property (retain) NSArray *sandboxExtensions;
@property (retain) id queuedHostPrincipal;
@property (retain) Protocol *queuedHostProtocol;
@property unsigned long long state;
@property unsigned int useCount;
@property (retain) id plugInPrincipal;
@property (retain) id embeddedPrincipal;
@property (retain) NSBundle *embeddedBundle;
@property (readonly) NSUserDefaults *defaults;
@property BOOL terminating;
@property (retain) NSDate *beganUsingAt;
@property (retain) NSDictionary *sourceForm;
@property (retain) NSDictionary *environment;
@property (readonly) NSMutableSet *requests;
@property (readonly) NSUUID *uuid;
@property (readonly) NSDate *timestamp;
@property (retain) NSDictionary *extensionState;
@property (copy) NSArray *preferredLanguages;
@property (readonly) NSArray *launchPersonas;
@property (copy) NSString *sandboxProfile;
@property (readonly) unsigned int extensionPointPlatform;
@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *url;
@property (readonly) NSURL *containingUrl;
@property (readonly) BOOL onSystemVolume;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *plugInDictionary;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property long long userElection;
@property (readonly) BOOL spent;
@property (readonly) BOOL active;
@property (copy) id /* block */ notificationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resume;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)suspend;
- (void)endUsing:(id /* block */)a0;
- (BOOL)isSandboxed;
- (void)addRequestUUID:(id)a0;
- (void)_validatePersona;
- (void)beginUsing:(id /* block */)a0;
- (void)beginUsingRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)beginUsingRequest:(id)a0 error:(id *)a1;
- (void)beginUsingRequest:(id)a0 withSubsystemOptions:(id)a1 completion:(id /* block */)a2;
- (BOOL)beginUsingRequest:(id)a0 withSubsystemOptions:(id)a1 error:(id *)a2;
- (BOOL)beginUsingWithError:(id *)a0;
- (void)beginUsingWithSubsystemOptions:(id)a0 completion:(id /* block */)a1;
- (BOOL)beginUsingWithSubsystemOptions:(id)a0 error:(id *)a1;
- (void)changeState:(unsigned long long)a0;
- (id)createInstanceWithUUID:(id)a0;
- (void)endUsingRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)endUsingRequest:(id)a0 error:(id *)a1;
- (BOOL)endUsingWithError:(id *)a0;
- (id)initWithForm:(id)a0 host:(id)a1;
- (BOOL)loadEmbeddedCode:(id *)a0;
- (BOOL)loadExtensions:(id)a0 error:(id *)a1;
- (void)messageTraceUsage;
- (id)prepareEmbeddedCode:(id *)a0;
- (void)preparePlugInUsingService:(id)a0 completion:(id /* block */)a1;
- (void)setBootstrapWithSubsystemOptions:(id)a0;
- (void)setHostPrincipal:(id)a0 withProtocol:(id)a1;
- (void)setReplyQueue:(id)a0;
- (void)startPlugInRequest:(id)a0 synchronously:(BOOL)a1 subsystemOptions:(id)a2 completion:(id /* block */)a3;
- (void)unwind:(unsigned long long)a0 force:(BOOL)a1;
- (void)updateFromForm:(id)a0 host:(id)a1;
- (BOOL)useBundle:(id)a0 error:(id *)a1;

@end

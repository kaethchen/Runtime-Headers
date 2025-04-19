@class NSString, _EXExtension, _EXExtensionIdentity;

@interface _EXRunningExtension : NSObject <NSXPCListenerDelegate>

@property (readonly) _EXExtensionIdentity *extensionIdentity;
@property (retain, nonatomic) _EXExtension *extension;
@property (readonly) struct { unsigned int val[8]; } hostAuditToken;
@property (readonly) unsigned long long signpost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void /* function */ *)entryPointFunction;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)checkIn;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)didFinishLaunching;
- (int)_startWithArguments:(const char **)a0 count:(int)a1;
- (void)enterCustomSandbox:(id)a0;
- (int)startWithArguments:(const char **)a0 count:(int)a1;
- (void)willFinishLaunching;

@end

@class NSDictionary, NSMutableDictionary;
@protocol SHKHostExtensionContextProtocol, NSSharingExtensionContextSessionCompletionDelegate;

@interface NSSharingExtensionContext : NSExtensionContext {
    NSMutableDictionary *_parameters;
    id<NSSharingExtensionContextSessionCompletionDelegate> _sessionCompletionDelegate;
}

@property (retain) id<SHKHostExtensionContextProtocol> host;
@property (retain) NSDictionary *options;
@property (retain) NSDictionary *sandboxExtensionTokens;
@property unsigned long long status;

+ (void)initialize;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)assertBundleInformationIsComplete;

- (void).cxx_destruct;
- (void)cancelRequestWithError:(id)a0;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)parameters;
- (id)displayState;
- (id)serviceDictionary;
- (id)clientAppID;
- (void)SHK_invalidate;
- (void)cancelServiceUI;
- (BOOL)hasSourceWindow;
- (BOOL)clientAppIsBackgroundOnly;
- (void)closeServiceWindowWithSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (id)extensionItem;
- (void)handleSharingOptions:(id)a0;
- (void)performService;
- (void)performServiceWithOptionsDictionaryData:(id)a0 completion:(id /* block */)a1;
- (void)serviceDidCompleteWithSuccess:(BOOL)a0 error:(id)a1 items:(id)a2 completionHandler:(id /* block */)a3;
- (id)sessionCompletionDelegate;
- (void)setDisplayState:(id)a0;
- (void)setSessionCompletionDelegate:(id)a0;
- (long long)sharingContentScope;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceWindowFrame;
- (BOOL)sourceWindowIsFullscreen;
- (void)startSessionTeardownByCallingContinuationBlock:(id /* block */)a0;
- (void)storeParameterValue:(id)a0 forKey:(id)a1;

@end

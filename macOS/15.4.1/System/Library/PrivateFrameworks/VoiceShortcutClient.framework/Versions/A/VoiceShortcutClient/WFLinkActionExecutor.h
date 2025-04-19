@class NSString, LNActionMetadata, LNMetadataProvider, LNAction;

@interface WFLinkActionExecutor : NSObject <LNActionExecutorDelegate> {
    LNMetadataProvider *_metadataProvider;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, nonatomic) LNActionMetadata *metadata;
@property (readonly, nonatomic) unsigned short source;
@property (readonly, copy, nonatomic) NSString *sourceOverride;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) long long authenticationPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)executorOptions;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didPerformActionWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;
- (id)initWithLinkAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 authenticationPolicy:(long long)a3 error:(id *)a4;
- (id)initWithLinkAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 authenticationPolicy:(long long)a3 source:(unsigned short)a4 error:(id *)a5;
- (id)initWithLinkAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 authenticationPolicy:(long long)a3 source:(unsigned short)a4 sourceOverride:(id)a5 error:(id *)a6;

@end

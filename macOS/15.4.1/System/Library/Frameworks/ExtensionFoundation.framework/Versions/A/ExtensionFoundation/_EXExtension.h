@class NSString, _EXExtensionIdentity;
@protocol _EXExtensionConfigurationProviding;

@interface _EXExtension : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) id<_EXExtensionConfigurationProviding> configuration;
@property BOOL hasSwiftEntryPoint;
@property (retain, nonatomic) _EXExtensionIdentity *internalRep;
@property (retain, nonatomic) id strongDelegate;
@property (readonly) struct { unsigned int x0[8]; } hostAuditToken;
@property (readonly) Class delegateClass;
@property (weak, nonatomic) id delegate;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)configuration;
- (void)handleConnection:(id)a0;
- (Class)delegateClass;
- (BOOL)shouldAcceptConnection:(id)a0;
- (BOOL)loadDelegate;
- (void)didFinishLaunching;
- (void)prepareForSceneConnectionWithConfiguration:(id)a0;
- (void)willFinishLaunching;

@end

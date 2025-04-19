@interface _EXNSExtensionShimExtension : _EXExtension

@property (retain) Class principalClass;
@property (retain) Class extensionContextClass;

- (void).cxx_destruct;
- (Class)delegateClass;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)didFinishLaunching;
- (void)willFinishLaunching;

@end

@class _EXExtensionProcess;

@interface LNExtensionConnection : LNConnection

@property (retain, nonatomic) _EXExtensionProcess *extensionProcess;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (void)connectDirectlyWithOptions:(id)a0;
- (void)connectUsingMediatorWithOptions:(id)a0;
- (id)extensionIdentityWithExtensionPointIdentifier:(id)a0 error:(id *)a1;
- (void)invalidateExtensionProcess;
- (BOOL)refreshWithOptions:(id)a0;

@end

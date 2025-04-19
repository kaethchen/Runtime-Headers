@class NSMutableDictionary, JSContext;

@interface JSModuleConstructor : NSObject <JSModuleConstructorExport>

@property (weak) JSContext *context;
@property (retain) NSMutableDictionary *modules;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addModule:(id)a0;
- (id)evaluateMainModuleScript:(id)a0;
- (id)moduleForIdentifier:(id)a0;
- (id)require:(id)a0;
- (id)requireModule:(id)a0;

@end

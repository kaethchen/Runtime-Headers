@class NSMapTable;

@interface MTRPluginMetricsTransformer : NSObject

@property (retain) NSMapTable *commandPathRegistry;

- (id)init;
- (void).cxx_destruct;
- (void)dispatchInvokeCommandExpectationMetric:(id)a0;
- (id)registerCommandPath:(id)a0 class:(Class)a1;
- (void)unregisterCommandPath:(id)a0;

@end

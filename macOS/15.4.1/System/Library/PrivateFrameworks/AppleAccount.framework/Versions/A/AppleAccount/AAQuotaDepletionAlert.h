@interface AAQuotaDepletionAlert : NSObject

- (id)init;
- (id)initForDataclass:(id)a0;
- (BOOL)showIfNecessaryWithHandler:(id /* block */)a0;
- (void)showWithHandler:(id /* block */)a0;

@end

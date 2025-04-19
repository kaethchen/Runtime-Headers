@interface OKMediaLocationClusterPredicate : OKMediaClusterPredicate

@property (readonly) unsigned long long type;

- (void)dealloc;
- (id)title;
- (id)initWithType:(unsigned long long)a0;
- (float)efficiencyForItems:(id)a0;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;

@end

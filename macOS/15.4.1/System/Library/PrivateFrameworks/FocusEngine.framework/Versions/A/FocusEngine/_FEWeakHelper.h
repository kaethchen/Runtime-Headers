@interface _FEWeakHelper : NSObject

@property (copy, nonatomic) id /* block */ deallocationBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithDeallocationBlock:(id /* block */)a0;

@end

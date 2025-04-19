@interface CRKBlockCancelable : NSObject <CRKCancelable>

@property (copy, nonatomic) id /* block */ block;

+ (id)cancelableWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;

@end

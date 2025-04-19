@interface Invalidation : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)invoke;
- (id)initWithBlock:(id /* block */)a0;

@end

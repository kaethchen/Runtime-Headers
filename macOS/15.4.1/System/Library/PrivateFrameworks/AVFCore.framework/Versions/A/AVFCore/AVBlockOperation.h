@interface AVBlockOperation : AVOperation {
    id /* block */ _block;
}

- (void)dealloc;
- (id)init;
- (void)start;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0;

@end

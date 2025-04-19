@interface TPSAsyncBlockOperation : TPSAsyncOperation {
    void /* unknown type, empty encoding */ asyncBlock;
}

@property (nonatomic, copy) id /* block */ asyncBlock;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)initWithAsyncBlock:(id /* block */)a0;

@end

@interface LACCacheAsync : LACCache {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (void)valueWithParameter:(id)a0 completion:(id /* block */)a1;

@end

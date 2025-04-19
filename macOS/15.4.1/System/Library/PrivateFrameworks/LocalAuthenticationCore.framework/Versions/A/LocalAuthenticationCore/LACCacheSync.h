@interface LACCacheSync : LACCache {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (id)valueWithParameter:(id)a0 error:(id *)a1;

@end

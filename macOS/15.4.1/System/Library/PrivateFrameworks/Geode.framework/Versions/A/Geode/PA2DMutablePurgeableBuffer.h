@interface PA2DMutablePurgeableBuffer : PA2DMutableBuffer

- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)accessROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 refillProcessor:(id /* block */)a1 block:(id /* block */)a2;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 refillProcessor:(id /* block */)a1;
- (id)initWithBacking:(id)a0;

@end

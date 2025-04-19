@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PA2DBufferPurgeableContiguousBacking : PA2DBufferContiguousBacking <PA2DPurgeableBufferBacking> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _accessCount;
}

@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_transferAccessCount:(id)a0 to:(id)a1;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 emptyProcessor:(id /* block */)a1;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 refillProcessor:(id /* block */)a1;
- (void)endAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (id)newBufferData:(unsigned long long)a0;
- (void)setPurgeLevel:(int)a0 forROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;

@end

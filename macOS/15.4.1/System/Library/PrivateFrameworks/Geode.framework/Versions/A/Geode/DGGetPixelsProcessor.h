@class NSString;

@interface DGGetPixelsProcessor : NSObject <DGConstImageProcessor> {
    struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } _destArea;
    void *_destPtr;
    long long _rowBytes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 rowBytes:(long long)a2;
- (void)processConstArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 bufferPtr:(const void *)a1 rowBytes:(long long)a2 format:(int)a3;

@end

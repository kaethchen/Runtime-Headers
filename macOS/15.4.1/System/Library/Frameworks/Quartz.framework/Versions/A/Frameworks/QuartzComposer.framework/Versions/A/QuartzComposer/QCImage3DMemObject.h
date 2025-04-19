@class QCArray;

@interface QCImage3DMemObject : QCMemObject {
    void /* function */ *_backingCallback;
    void *_backingInfo;
    void *_hostPtr;
    void *_unused3[4];
}

@property (readonly) unsigned long long pixelsWide;
@property (readonly) unsigned long long pixelsHigh;
@property (readonly) unsigned long long pixelsDeep;
@property (readonly) unsigned long long elementSize;
@property (readonly) int type;
@property (readonly) QCArray *array;
@property (readonly) QCArray *backing;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (BOOL)attached;
- (unsigned long long)byteSize;
- (void)endUpdateStream;
- (BOOL)_readbackImage3D:(id)a0;
- (BOOL)beginUpdateStream;
- (void)finalize_QCImage3DMemObject;
- (id)initWithContext:(id)a0 array:(id)a1 pixelsWide:(unsigned long long)a2 pixelsHigh:(unsigned long long)a3 pixelsDeep:(unsigned long long)a4 elementSize:(unsigned long long)a5 type:(int)a6 options:(id)a7;
- (id)initWithContext:(id)a0 hostPtr:(void *)a1 releaseCallback:(void /* function */ *)a2 releaseInfo:(void *)a3 pixelsWide:(unsigned long long)a4 pixelsHigh:(unsigned long long)a5 pixelsDeep:(unsigned long long)a6 elementSize:(unsigned long long)a7 type:(int)a8 options:(id)a9;
- (id)initWithContext:(id)a0 pixelsWide:(unsigned long long)a1 pixelsHigh:(unsigned long long)a2 pixelsDeep:(unsigned long long)a3 elementSize:(unsigned long long)a4 type:(int)a5 options:(id)a6;

@end

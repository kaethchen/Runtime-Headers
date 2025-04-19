@class QCArray;

@interface QCArrayMemObject : QCMemObject {
    unsigned long long _bytesPerValue;
    void /* function */ *_backingCallback;
    void *_backingInfo;
    void *_hostPtr;
    void *_unused3[4];
}

@property unsigned long long elementSize;
@property unsigned long long count;
@property (readonly) int type;
@property (readonly) QCArray *array;
@property (readonly) QCArray *backing;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (BOOL)attached;
- (unsigned long long)byteSize;
- (void)endUpdateStream;
- (BOOL)beginUpdateStream;
- (void)finalize_QCArrayBufferObject;
- (id)initWithContext:(id)a0 array:(id)a1 options:(id)a2;
- (id)initWithContext:(id)a0 count:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 options:(id)a4;
- (id)initWithContext:(id)a0 hostPtr:(void *)a1 releaseCallback:(void /* function */ *)a2 releaseInfo:(void *)a3 count:(unsigned long long)a4 elementSize:(unsigned long long)a5 type:(int)a6 options:(id)a7;

@end

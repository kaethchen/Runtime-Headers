@class NSArray;

@interface QCArray : NSObject {
    void /* function */ *_backingCallback;
    void *_backingInfo;
    void *_unused[4];
}

@property void *array;
@property unsigned long long elementSize;
@property (readonly) unsigned long long byteSize;
@property (readonly) NSArray *NSArrayRepresentation;
@property (readonly) int type;
@property (readonly) int status;
@property unsigned long long count;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (BOOL)isEqualToArray:(id)a0;
- (void)_setArray:(void *)a0 free:(BOOL)a1;
- (id)initWithCount:(unsigned long long)a0 elementSize:(unsigned long long)a1 type:(int)a2;
- (BOOL)beginUpdateArray;
- (void)bindArrayToContext:(id)a0 clientState:(int)a1 savedState:(struct { int x0; int x1; int x2; unsigned char x3; unsigned char x4; void *x5; void *x6[4]; } *)a2;
- (unsigned long long)bytesPerValue;
- (void)drawArrayWithContext:(id)a0 glMode:(int)a1 indices:(id)a2;
- (void)endUpdateArray;
- (void)finalize_QCArray;
- (id)initWithBaseAddress:(void *)a0 releaseCallback:(void /* function */ *)a1 releaseInfo:(void *)a2 count:(unsigned long long)a3 elementSize:(unsigned long long)a4 type:(int)a5;
- (void)unbindArrayFromContext:(id)a0 clientState:(int)a1 savedState:(struct { int x0; int x1; int x2; unsigned char x3; unsigned char x4; void *x5; void *x6[4]; } *)a2;

@end

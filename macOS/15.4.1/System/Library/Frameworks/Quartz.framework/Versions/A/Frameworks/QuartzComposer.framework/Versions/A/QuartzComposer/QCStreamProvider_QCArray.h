@class QCArray;

@interface QCStreamProvider_QCArray : QCStreamProvider {
    QCArray *_provider;
    unsigned long long _elementSize;
}

+ (id)createProviderWithSource:(id)a0 options:(id)a1;
+ (BOOL)isCompatibleWithSource:(id)a0 sourceMD5:(struct { unsigned char x0[16]; } *)a1;

- (void)dealloc;
- (unsigned long long)count;
- (int)type;
- (id)pixelFormat;
- (unsigned long long)elementSize;
- (id)createArrayMemObjectForManager:(id)a0 withCount:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 options:(id)a4;
- (id)createImage2DMemObjectForManager:(id)a0 withFormat:(id)a1 options:(id)a2;
- (id)initWithArray:(id)a0 options:(id)a1;
- (id)initWithList:(id)a0 options:(id)a1;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;

@end

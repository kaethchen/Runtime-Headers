@class MTLType;

@interface MTLArrayTypeInternal : MTLArrayType {
    unsigned long long _dataType;
    unsigned int _arrayLength : 32;
    unsigned int _stride : 32;
    id _details;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (nonatomic) unsigned long long argumentIndexStride;
@property (nonatomic) unsigned long long indirectArgumentIndexStride;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)arrayLength;
- (unsigned long long)dataType;
- (id)elementArrayType;
- (id)elementStructType;
- (unsigned long long)elementType;
- (id)initWithArrayLength:(unsigned long long)a0 elementType:(unsigned long long)a1 stride:(unsigned long long)a2 pixelFormat:(unsigned long long)a3 aluType:(unsigned long long)a4 details:(id)a5;
- (unsigned long long)stride;
- (id)elementTypeDescription;
- (void)setStride:(unsigned long long)a0;
- (id)elementIndirectArgumentType;
- (id)elementPointerType;
- (id)elementTextureReferenceType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (BOOL)isArrayLayoutThreadSafeWith:(id)a0;

@end

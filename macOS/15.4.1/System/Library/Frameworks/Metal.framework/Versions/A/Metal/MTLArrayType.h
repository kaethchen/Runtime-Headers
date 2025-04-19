@interface MTLArrayType : MTLType

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long stride;
@property (readonly) unsigned long long argumentIndexStride;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)elementArrayType;
- (id)elementStructType;
- (id)elementIndirectArgumentType;
- (id)elementPointerType;
- (id)elementTextureReferenceType;

@end

@class NSString, MTLType;

@interface MTLStructMemberInternal : MTLStructMember {
    NSString *_name;
    unsigned long long _offset;
    unsigned short _dataType : 16;
    id _details;
    unsigned long long _argumentIndex;
    MTLType *_typeInfo;
}

@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (readonly) unsigned long long render_target;
@property (readonly) unsigned long long raster_order_group;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (unsigned long long)argumentIndex;
- (id)arrayType;
- (unsigned long long)dataType;
- (id)dataTypeDescription;
- (unsigned long long)indirectArgumentIndex;
- (id)initWithName:(id)a0 offset:(unsigned long long)a1 dataType:(unsigned long long)a2 pixelFormat:(unsigned long long)a3 aluType:(unsigned long long)a4 indirectArgumentIndex:(unsigned long long)a5 render_target:(unsigned long long)a6 raster_order_group:(unsigned long long)a7 details:(id)a8;
- (unsigned long long)offset;
- (id)pointerType;
- (void)setOffset:(unsigned long long)a0;
- (id)structType;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)indirectArgumentType;
- (BOOL)isMemberLayoutThreadSafeWith:(id)a0;
- (id)textureReferenceType;

@end

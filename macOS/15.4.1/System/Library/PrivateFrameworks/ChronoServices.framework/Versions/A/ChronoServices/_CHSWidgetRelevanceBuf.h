@class NSString, AFBBufRef, NSData, _CHSIntentReferenceBuf;

@interface _CHSWidgetRelevanceBuf : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct WidgetRelevanceBuf { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *attributeKey;
@property (readonly, nonatomic) const char *attributeKeyAsCString;
@property (readonly, nonatomic) NSData *attributeKeyAsData;
@property (readonly, nonatomic) _CHSIntentReferenceBuf *intentReference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct WidgetRelevanceBuf { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end

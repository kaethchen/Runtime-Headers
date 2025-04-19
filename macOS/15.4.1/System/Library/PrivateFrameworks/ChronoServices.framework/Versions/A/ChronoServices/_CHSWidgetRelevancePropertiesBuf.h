@class _CHSExtensionIdentityBuf, NSString, NSArray, NSData, AFBBufRef;

@interface _CHSWidgetRelevancePropertiesBuf : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct WidgetRelevancePropertiesBuf { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) _CHSExtensionIdentityBuf *extensionIdentity;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) const char *kindAsCString;
@property (readonly, nonatomic) NSData *kindAsData;
@property (readonly, nonatomic) BOOL hasSupportsBackgroundRefresh;
@property (readonly, nonatomic) BOOL supportsBackgroundRefresh;
@property (readonly, nonatomic) BOOL hasIsDeletion;
@property (readonly, nonatomic) BOOL isDeletion;
@property (readonly, nonatomic) BOOL hasLastRelevanceUpdate;
@property (readonly, nonatomic) double lastRelevanceUpdate;
@property (readonly, nonatomic) NSArray *relevances;

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
- (id)initWithBufRef:(id)a0 cppPointer:(const struct WidgetRelevancePropertiesBuf { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end

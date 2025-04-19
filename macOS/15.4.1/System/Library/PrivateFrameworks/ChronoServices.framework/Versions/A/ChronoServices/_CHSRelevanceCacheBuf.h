@class NSArray, NSData, AFBBufRef;

@interface _CHSRelevanceCacheBuf : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct RelevanceCacheBuf { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSArray *archivedObjects;
@property (readonly, nonatomic) NSData *archivedObjectsAsData;
@property (readonly, nonatomic) NSArray *groups;

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
- (id)initWithBufRef:(id)a0 cppPointer:(const struct RelevanceCacheBuf { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;
- (const char *)archivedObjectsAsCArrayWithCount:(unsigned long long *)a0;
- (BOOL)enumerateArchivedObjectsUsingBlock:(id /* block */)a0;

@end

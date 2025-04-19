@class NSArray, NSData, AFBBufRef;

@interface _CHSIntentReferenceBuf : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct IntentReferenceBuf { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) BOOL hasStableHash;
@property (readonly, nonatomic) long long stableHash;
@property (readonly, nonatomic) NSArray *intentData;
@property (readonly, nonatomic) NSData *intentDataAsData;
@property (readonly, nonatomic) NSArray *schemaData;
@property (readonly, nonatomic) NSData *schemaDataAsData;
@property (readonly, nonatomic) NSArray *partialIntentData;
@property (readonly, nonatomic) NSData *partialIntentDataAsData;

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
- (id)initWithBufRef:(id)a0 cppPointer:(const struct IntentReferenceBuf { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;
- (BOOL)enumerateIntentDataUsingBlock:(id /* block */)a0;
- (BOOL)enumeratePartialIntentDataUsingBlock:(id /* block */)a0;
- (BOOL)enumerateSchemaDataUsingBlock:(id /* block */)a0;
- (const char *)intentDataAsCArrayWithCount:(unsigned long long *)a0;
- (const char *)partialIntentDataAsCArrayWithCount:(unsigned long long *)a0;
- (const char *)schemaDataAsCArrayWithCount:(unsigned long long *)a0;

@end

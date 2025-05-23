@interface TTVersionedDocument : NSObject

@property (nonatomic) void *documentArchive;
@property (readonly, nonatomic) unsigned long long futureVersionCount;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)versionedDocumentSerializationVersion;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (void)loadArchive:(const void *)a0;
- (id)serialize;
- (id)initWithArchive:(const void *)a0;
- (void)loadData:(id)a0;
- (void)loadDocumentArchive:(void *)a0;
- (unsigned int)maxDocumentVersion;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (unsigned long long)mergeWithVersionedDocument:(id)a0;
- (void)saveCurrentVersion:(void *)a0;
- (void)saveToArchive:(void *)a0;
- (id)serializeCurrentVersion:(unsigned int *)a0;

@end

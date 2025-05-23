@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager

+ (id)sharedManager;
+ (id)baseDirectoryURL;

- (id)newDirectoryForDocumentUUID:(id)a0;
- (id)newDirectoryWithFilename:(id)a0;

@end

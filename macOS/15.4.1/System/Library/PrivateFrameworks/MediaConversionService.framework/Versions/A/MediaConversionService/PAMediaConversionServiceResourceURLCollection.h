@class NSMutableDictionary, NSDictionary, NSURL, NSError, PAMediaConversionServiceResourceURLCollectionAccessProvider;

@interface PAMediaConversionServiceResourceURLCollection : NSObject

@property (readonly) BOOL isBlastDoorAccessRequired;
@property (readonly) NSDictionary *blastDoorMainSourceProperties;
@property (readonly) NSDictionary *blastDoorVideoComplementProperties;
@property (readonly) NSURL *blastDoorSourceURL;
@property (readonly) NSError *blastDoorError;
@property (retain) NSMutableDictionary *urlReferencesByRole;
@property (retain) PAMediaConversionServiceResourceURLCollectionAccessProvider *accessProviderDelegate;
@property (readonly) unsigned long long urlCount;
@property (readonly) BOOL allURLsAreReadable;

+ (id)collectionWithMainResourceURL:(id)a0;
+ (BOOL)getSignatureString:(id *)a0 filenameSummary:(id *)a1 forDictionaryRepresentation:(id)a2;
+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)a0 accessProvider:(id)a1 error:(id *)a2;
+ (id)filenameSummaryStringForDictionaryRepresentation:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resourceURLForRole:(id)a0;
- (void)setResourceURL:(id)a0 forRole:(id)a1;
- (void)setResourceURL:(id)a0 forRole:(id)a1 deleteOnDeallocation:(BOOL)a2;
- (void)enumerateResourceURLReferences:(id /* block */)a0;
- (id)fileSizeSummary;
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)a0;
- (BOOL)containsAllRoles:(id)a0;
- (BOOL)containsAnyRole:(id)a0;
- (BOOL)copyURL:(id)a0 forRole:(id)a1 toDirectory:(id)a2 error:(id *)a3;
- (BOOL)ensureFilesExistWithError:(id *)a0;
- (void)enumerateResourceURLs:(id /* block */)a0;
- (id)filenameExtensionAndPathHashForRole:(id)a0;
- (id)logMessageSummary;
- (id)logMessageSummaryWithFullPath:(BOOL)a0;
- (BOOL)removeExistingEmptyFilesWithError:(id *)a0;
- (void)setShouldDeleteURLOnDeallocation:(BOOL)a0 forRole:(id)a1;
- (id)typeIdentifierForResourceURLWithRole:(id)a0;
- (id)urlForDebugDumpWithDirectoryName:(id)a0 inExistingParentDirectory:(id)a1 error:(id *)a2;

@end

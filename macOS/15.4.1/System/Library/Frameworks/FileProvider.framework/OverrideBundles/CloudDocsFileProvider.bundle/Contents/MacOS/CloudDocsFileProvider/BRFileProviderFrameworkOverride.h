@class NSString;

@interface BRFileProviderFrameworkOverride : NSObject <FPFrameworkOverriding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)FPAreUTIsImportable:(id)a0 toFolderItem:(id)a1;
- (void)FPUniversalBookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)FPBookmarkableStringFromDocumentURL:(id)a0 error:(id *)a1;
- (id)FPDocumentURLFromBookmarkableString:(id)a0 error:(id *)a1;
- (void)FPGetPausedFilesList:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)FPResumeSyncForFileAtURL:(id)a0 resumeOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)FPTrashURLForItemAtURL:(id)a0 error:(id *)a1;
- (void)FPValuesForAttributes:(id)a0 forItemAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)FPDocumentURLFromUniversalBookmarkableString:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPBookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPDocumentURLFromBookmarkableString:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPEvictItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPFetchLatestVersionForFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)FPFilterActions:(id)a0 forDroppingItems:(id)a1 underItem:(id)a2;
- (void)FPPauseSyncForFileAtURL:(id)a0 timeout:(double)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)FPStateForDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)FPURLIsInFileProvider:(id)a0;
- (long long)overridePriority;
- (id)_URLForItem:(id)a0;
- (id)_acceptableUTIsForFolderItem:(id)a0;
- (BOOL)_doesUTI:(id)a0 conformsToUTIs:(id)a1;
- (id)bookmarkPrefix;

@end

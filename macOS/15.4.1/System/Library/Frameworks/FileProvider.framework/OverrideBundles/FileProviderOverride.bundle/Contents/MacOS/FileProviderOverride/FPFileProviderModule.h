@class NSString;

@interface FPFileProviderModule : NSObject <FPFrameworkOverriding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)FPUniversalBookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)FPBookmarkableStringFromDocumentURL:(id)a0 error:(id *)a1;
- (id)FPDocumentURLFromBookmarkableString:(id)a0 error:(id *)a1;
- (void)FPExtendBookmarkForDocumentURL:(id)a0 forBundleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)FPFileProviderServiceEndpointCreatingForItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPFileProviderServiceEndpointCreatingWithName:(id)a0 itemAtURL:(id)a1 synchronously:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)FPSetValue:(id)a0 forAttribute:(id)a1 onItemAtURL:(id)a2 error:(id *)a3;
- (id)FPTrashURLForItemAtURL:(id)a0 error:(id *)a1;
- (void)FPValuesForAttributes:(id)a0 forItemAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)FPDocumentURLFromUniversalBookmarkableString:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPBookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPDocumentURLFromBookmarkableString:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPEvictItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPFileProviderServiceEndpointCreatingForItemAtURL:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)FPStateForDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)_originalDocumentURLForURL:(id)a0;
- (unsigned char)responsibleForURL:(id)a0;

@end

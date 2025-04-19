@class NSString;

@interface ICDFileProviderFrameworkOverride : NSObject <FPFrameworkOverriding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isURLExcludedFromSync:(id)a0 syncRoot:(id)a1 error:(id *)a2;

- (void)FPUniversalBookmarkableStringFromDocumentURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPValuesForAttributes:(id)a0 forItemAtURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)FPDocumentURLFromUniversalBookmarkableString:(id)a0 completionHandler:(id /* block */)a1;
- (void)FPStateForDomainWithID:(id)a0 completionHandler:(id /* block */)a1;
- (long long)overridePriority;
- (id)bookmarkPrefix;

@end

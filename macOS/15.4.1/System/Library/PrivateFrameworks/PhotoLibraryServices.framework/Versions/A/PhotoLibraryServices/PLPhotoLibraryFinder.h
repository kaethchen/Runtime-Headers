@class PLPhotoLibrarySearchCriteria;

@interface PLPhotoLibraryFinder : NSObject

@property (readonly, copy, nonatomic) PLPhotoLibrarySearchCriteria *searchCriteria;

+ (id)_findPhotoLibraryIdentifiersInContainerRootURL:(id)a0 matchingUUID:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)defaultLibraryURLForLibraryDomain:(long long)a0 container:(id)a1 uuid:(id)a2;

- (void).cxx_destruct;
- (id)_containerRootURLsForDomain:(long long)a0;
- (id)_findPhotoLibraryIdentifiersInDomain:(long long)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_isApplicationDomainContainerURL:(id)a0;
- (id)_rootURLForPhotoLibraryDomain:(long long)a0;
- (id)findMatchingPhotoLibraryIdentifiersAndReturnError:(id *)a0;
- (id)findMatchingPhotoLibraryIdentifiersWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithSearchCriteria:(id)a0;

@end

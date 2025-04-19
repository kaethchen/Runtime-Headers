@class PHFetchResult;

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)fetchResult;
- (BOOL)isCurated;
- (BOOL)reverseSortOrder;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id /* block */)curatedRefetchCondition;
- (long long)curationLength;
- (BOOL)ensureKeyAssetAtBeginning;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)filteredFetchResult;
- (id)includedOids;
- (id)inclusionPredicate;
- (long long)keyAssetIndex;
- (id)keyAssetsFetchResult;
- (id)manualOrderUUIDs;
- (BOOL)wantsCuration;

@end

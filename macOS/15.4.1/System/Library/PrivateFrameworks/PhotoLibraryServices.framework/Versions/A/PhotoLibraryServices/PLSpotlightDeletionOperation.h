@class NSArray, CSSearchableIndex, PLPhotoLibrary;

@interface PLSpotlightDeletionOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly, copy, nonatomic) NSArray *searchableItemIdentifiers;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (void)main;
- (id)initWithPhotoLibrary:(id)a0 spotlightSearchableIndex:(id)a1 searchableItemIdentifiers:(id)a2;

@end

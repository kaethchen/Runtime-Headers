@class NSArray, PHFetchResult, NSMutableDictionary, NSDate;
@protocol PXSharedLibrarySharingSuggestionsDataSourceDelegate;

@interface PXSharedLibrarySharingSuggestionsDataSource : PXSectionedDataSource {
    NSMutableDictionary *_promiseByContainer;
}

@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) NSDate *aggregateBeforeDate;
@property (readonly, nonatomic) PHFetchResult *sharingSuggestions;
@property (weak, nonatomic) id<PXSharedLibrarySharingSuggestionsDataSourceDelegate> delegate;

- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)_promiseForContainer:(id)a0;
- (id)initWithSharingSuggestions:(id)a0 aggregateBeforeDate:(id)a1;
- (id)itemIndexesForSharingSuggestions:(id)a0;

@end

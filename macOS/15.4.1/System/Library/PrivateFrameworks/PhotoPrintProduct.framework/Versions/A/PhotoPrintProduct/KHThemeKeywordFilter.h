@class NSString, NSMutableArray;

@interface KHThemeKeywordFilter : NSObject <KHSortingProtocol> {
    NSString *_identifier;
    NSString *_displayName;
    NSMutableArray *_indexes;
    NSMutableArray *_ratingIndexes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addIndex:(id)a0;
- (id)identifier;
- (id)displayName;
- (id)initWithIdentifier:(id)a0;
- (id)indexes;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1;
- (void)addRatingIndex:(id)a0;
- (id)indexesSortedByRating;
- (id)ratingIndexes;
- (long long)sortByDefault:(id)a0;

@end

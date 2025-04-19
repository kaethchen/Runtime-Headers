@class NSArray, NSDictionary, NSString, MPSectionedCollection, NSIndexPath;

@interface _MPCPlayerResponseTracklistDisplayDataSource : NSObject <MPLazySectionedCollectionDataSource>

@property (readonly, nonatomic) MPSectionedCollection *items;
@property (readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDictionary *sectionRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (id)displayIndexPathForStructuredIndexPath:(id)a0;
- (id)initWithResponse:(id)a0 tracklistItems:(id)a1 playingItemIndexPath:(id)a2 tailInsertionContentItemID:(id)a3;
- (id)structuredIndexPathForDisplayIndexPath:(id)a0;

@end

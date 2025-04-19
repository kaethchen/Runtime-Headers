@class NSString, NSArray;

@interface MPModeliTunesLibraryModelSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    NSArray *_sectionedItems;
    NSArray *_sections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (BOOL)hasMoreResultsForSectionAtIndex:(long long)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)initWithItems:(id)a0 sections:(id)a1;
- (long long)searchWeightForIndexPath:(id)a0;

@end

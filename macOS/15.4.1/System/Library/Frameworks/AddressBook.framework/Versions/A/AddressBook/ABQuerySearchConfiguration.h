@class NSOperationQueue, ABAddressBook;
@protocol ABPersonListHeadlining, ABContactSearching;

@interface ABQuerySearchConfiguration : ABPersonSearchConfiguration {
    ABAddressBook *_addressBook;
    NSOperationQueue *_searchQueue;
    id<ABPersonListHeadlining> _headliner;
}

@property (retain) id<ABContactSearching> searchNode;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)clearSearchResults;
- (void)fetchContacts;
- (void)searchForString:(id)a0;
- (void)configureForSearchingNode:(id)a0;
- (void)incrementSearchCount;
- (void)addPersonDictionariesToResults:(id)a0;
- (void)beginSearchForString:(id)a0;
- (void)cacheKnownPropertiesForClass:(Class)a0 dictionaryRepresentations:(id)a1;
- (void)configurePersonListForSearch:(id)a0;
- (id)dictionaryRepresentationsOfRecords:(id)a0;
- (id)groupSearchResultsByRecordClass:(id)a0;
- (id)makeFinishOperation;
- (id)makeSearchOperationsForSearchString:(id)a0;
- (void)operation:(id)a0 dependsOnAllOperations:(id)a1;
- (void)searchFieldDidChange:(id)a0;
- (void)updateSearchResults:(id)a0 forMatchingQuery:(id)a1;

@end

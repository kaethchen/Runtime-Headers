@class NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray;
@protocol ABLinkingInfoDataSource;

@interface ABMatchesPeopleByName : NSObject {
    id<ABLinkingInfoDataSource> _adapter;
    NSDictionary *_recordsByAccount;
    NSMutableDictionary *_recordsByAccountByName;
    NSMutableSet *_allIndexedNames;
    NSMutableArray *_matches;
}

- (void)dealloc;
- (void)index;
- (void)match;
- (id)peopleWithName:(id)a0;
- (void)addLinkedPeople:(id)a0;
- (void)addUnlinkedPeople:(id)a0;
- (BOOL)anyAccountHasMoreThanOnePersonWithName:(id)a0;
- (void)collectPeopleWithName:(id)a0;
- (void)indexAccount:(id)a0;
- (id)initWithRecordsByAccount:(id)a0 adapter:(id)a1;
- (id)matchedRecords;

@end

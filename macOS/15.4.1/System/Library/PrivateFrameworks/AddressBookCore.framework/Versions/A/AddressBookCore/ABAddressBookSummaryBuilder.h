@class NSMutableString, ABAddressBook;

@interface ABAddressBookSummaryBuilder : NSObject {
    ABAddressBook *_addressBook;
    NSMutableString *_summary;
}

- (void)dealloc;
- (void)_addSummaryHeader;
- (id)_groupsInOrder;
- (id)_peopleInOrder;
- (void)_prepareRepresentation;
- (void)_summarizeGroups;
- (void)_summarizePeople;
- (void)_summarizeRecord:(id)a0 withBuilder:(id)a1;
- (void)_summarizeRecords:(id)a0 withBuilder:(id)a1;
- (id)buildSummary;
- (id)initWithAddressBook:(id)a0;

@end

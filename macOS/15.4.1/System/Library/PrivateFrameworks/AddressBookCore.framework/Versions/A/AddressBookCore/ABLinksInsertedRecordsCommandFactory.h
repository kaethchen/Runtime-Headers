@class NSArray;

@interface ABLinksInsertedRecordsCommandFactory : ABLinksUnlinkedRecordsCommandFactory

@property (copy) NSArray *insertedRecords;

- (void)dealloc;
- (Class)builtCommandClass;
- (id)combineInsertedAndMatchingRecords:(id)a0;
- (id)fetchContactsWithIdentifiers:(id)a0;
- (id)fetchPeople;
- (id)identifiersOfCollidedPeople;

@end

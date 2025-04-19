@class NSArray, NSDictionary;
@protocol ABLinkingInfoDataSource;

@interface ABLinkingCommand : ABBookUndoableCommand {
    NSArray *_peopleUIDArrays;
    id<ABLinkingInfoDataSource> _adapter;
}

@property (retain) NSArray *peopleArrays;
@property (retain) NSDictionary *peopleByUniqueId;
@property (retain) NSDictionary *originalLinkingSnapshot;
@property (retain) NSDictionary *modifiedLinkingSnapshot;

+ (id)commandWithRecords:(id)a0 addressBook:(id)a1;
+ (id)commandWithRecordArrays:(id)a0 addressBook:(id)a1;

- (void)dealloc;
- (void)execute;
- (id)allUIDs;
- (void)changeAllPeople;
- (void)applyLinks:(id)a0;
- (void)changePeople:(id)a0;
- (void)enumeratePeople:(id /* block */)a0;
- (void)executeRedo;
- (void)executeUndo;
- (void)indexRecords;
- (id)initWithRecordArrays:(id)a0 adapter:(id)a1;
- (id)initWithRecords:(id)a0 adapter:(id)a1;
- (void)loadPeople;
- (id)makeLinkingSnapshot;
- (void)prepareRecords;
- (id)uidsOfPeopleInArrays:(id)a0 adapter:(id)a1;

@end

@class NSString;
@protocol ABLinkingInfoDataSource;

@interface ABLinksUnlinkedRecordsCommandFactory : NSObject <ABLinkPeopleCommandFactory> {
    id<ABLinkingInfoDataSource> _adapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAdapter:(id)a0;
- (id)analyzePeopleInAddressBook;
- (id)buildCommand;
- (Class)builtCommandClass;
- (id)fetchPeople;
- (id)findPeopleNeedingLinked:(id)a0;
- (id)optimizeOutSingleRecords:(id)a0;
- (id)separatePeopleByAccount:(id)a0;

@end

@class NSArray;
@protocol ABLinkingInfoDataSource;

@interface ABUnlinksLoneRemainingPeopleCommand : ABBookCommand {
    NSArray *_linkIds;
    id<ABLinkingInfoDataSource> _adapter;
}

+ (id)commandWithLinkIds:(id)a0 adapter:(id)a1;

- (void)dealloc;
- (void)execute;
- (id)remainingPeople;
- (id)initWithLinkIds:(id)a0 adapter:(id)a1;
- (id)peopleFilteredForNoRemainingLinkedPeople:(id)a0;
- (void)unlinkPeople:(id)a0;

@end

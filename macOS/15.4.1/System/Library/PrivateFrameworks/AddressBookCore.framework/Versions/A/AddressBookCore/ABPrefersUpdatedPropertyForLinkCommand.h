@class NSArray;
@protocol ABLinkingInfoDataSource;

@interface ABPrefersUpdatedPropertyForLinkCommand : ABBookCommand {
    NSArray *_updatedPeople;
    id<ABLinkingInfoDataSource> _adapter;
}

+ (id)_buildCommandOfClass:(Class)a0 withUpdatedPeople:(id)a1 adapter:(id)a2;
+ (id)prefersNameCommandWithUpdatedPeople:(id)a0 adapter:(id)a1;
+ (id)prefersPhotoCommandWithUpdatedPeople:(id)a0 adapter:(id)a1;

- (void)dealloc;
- (void)execute;
- (id)arrayByRemovingPeopleWhereMoreThanOneHaveChangedInALink:(id)a0;
- (id)initWithUpdatedPeople:(id)a0 adapter:(id)a1;
- (void)modifyPeople:(id)a0;
- (void)modifyPerson:(id)a0;
- (id)peopleNeedingFlagged;
- (BOOL)personNeedsFlagged:(id)a0;
- (id)propertiesThatWillFlagAPersonWhenChanged;
- (id)relevantUpdatedPeople;

@end

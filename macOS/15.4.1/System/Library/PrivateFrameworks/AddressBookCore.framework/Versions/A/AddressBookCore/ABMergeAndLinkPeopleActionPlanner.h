@class NSArray;

@interface ABMergeAndLinkPeopleActionPlanner : NSObject {
    NSArray *_people;
}

@property (readonly) int plannedActions;

- (void)dealloc;
- (id)initWithPeople:(id)a0;
- (BOOL)anyAccountHasMoreThanOneWritablePerson:(id)a0;
- (BOOL)anyPersonIsReadOnly;
- (id)menuTitleForPlannedActions:(int)a0;
- (id)peopleByStoreURL;
- (BOOL)thereArePeopleInMoreThanOneAccount:(id)a0;

@end

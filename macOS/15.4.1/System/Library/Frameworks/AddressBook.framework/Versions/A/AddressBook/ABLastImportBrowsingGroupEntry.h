@interface ABLastImportBrowsingGroupEntry : ABGroupBrowsingGroupEntry

+ (id)identifierForGroup:(id)a0;

- (BOOL)canDrop;
- (BOOL)containsPeople:(id)a0;
- (id)iconWithStyleProvider:(id)a0;
- (id)initWithName:(id)a0 addressBook:(id)a1;
- (BOOL)isAvailableInTimeMachine;

@end

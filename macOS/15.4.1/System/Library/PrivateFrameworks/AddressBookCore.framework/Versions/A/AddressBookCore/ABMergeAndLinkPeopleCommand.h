@class ABLinkPeopleCommand, NSArray, ABMergePeopleCommand, ABMergeAndLinkPeopleActionPlanner, ABAddressBook;
@protocol ABUndoableCommand;

@interface ABMergeAndLinkPeopleCommand : ABBookUndoableCommand {
    ABAddressBook *_addressBook;
    ABMergePeopleCommand *_mergeCommand;
    ABLinkPeopleCommand *_linkCommand;
    id<ABUndoableCommand> _privacyCommand;
    ABMergeAndLinkPeopleActionPlanner *_planner;
    BOOL _ignoresGuardianRestrictions;
}

@property (readonly) NSArray *resultingPeople;
@property (readonly) int plannedActions;

- (void)dealloc;
- (void)execute;
- (void)releaseCommands;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (id)planner;
- (void)applyPrivacyFlagsToAllRecords;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (id)initWithPeople:(id)a0 addressBook:(id)a1;
- (id)menuTitleForPlannedActions:(int)a0;
- (void)performLink;
- (void)performMerge;
- (void)setResultingPeople:(id)a0;
- (BOOL)shouldMerge;
- (void)undoCommands;

@end

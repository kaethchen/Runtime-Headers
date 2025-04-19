@class ABBookGroupCopyCommand, ABBookGroupDeleteCommand;

@interface ABBookGroupCutCommand : ABBookUndoableCommand {
    ABBookGroupCopyCommand *_copyCommand;
    ABBookGroupDeleteCommand *_deleteCommand;
    BOOL ignoresGuardianRestrictions;
}

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeRedo;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (BOOL)groupBelongsToGuardianRestrictedContainer;
- (id)initWithCopyCommand:(id)a0 deleteCommand:(id)a1;

@end

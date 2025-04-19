@class NSString, NSDictionary, ABRecordContext, ABGroupEntriesList;

@interface ABBookGroupDeleteCommand : ABBookUndoableCommand {
    ABRecordContext *_recordContext;
    NSString *_groupUid;
    Class _groupClass;
    ABGroupEntriesList *_groupEntriesList;
    int _containmentPersonality;
    BOOL ignoresGuardianRestrictions;
}

@property (copy) NSDictionary *undoState;

- (void).cxx_destruct;
- (id)group;
- (id)actionName;
- (void)execute;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)executeUndo;
- (BOOL)ignoresGuardianRestrictions;
- (id)initWithRecordContext:(id)a0 group:(id)a1 groupEntriesList:(id)a2;

@end

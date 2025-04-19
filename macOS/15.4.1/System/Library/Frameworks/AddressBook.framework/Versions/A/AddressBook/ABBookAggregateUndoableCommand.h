@class NSString, NSArray, ABAddressBook;

@interface ABBookAggregateUndoableCommand : ABBookUndoableCommand <ABSaveRequestCommand> {
    NSString *_actionName;
    NSArray *_undoableCommands;
    ABAddressBook *_addressBook;
    BOOL _shouldSave;
}

@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builder;

- (void).cxx_destruct;
- (id)actionName;
- (void)execute;
- (id)initWithBuilder:(id)a0;
- (void)executeRedo;
- (void)executeUndo;
- (void)visit:(id)a0;
- (void)saveIfNeeded;
- (id)actionNameOfFirstCommand;
- (void)configureVisitor:(id)a0;
- (BOOL)containsSubCommands;
- (void)executeRedoWithSaveRequest:(id)a0;
- (void)executeUndoWithSaveRequest:(id)a0;
- (void)executeWithSaveRequest:(id)a0;
- (id)subCommands;
- (void)visitCommandsWithUnconfiguredVisitor:(id)a0 enumerationOptions:(unsigned long long)a1;
- (void)visitCommandsWithVisitor:(id)a0 enumerationOptions:(unsigned long long)a1;

@end

@class NSString, NSMutableArray, ABAddressBook;

@interface ABBookAggregateUndoableCommandBuilder : NSObject <ABCommandVisitor> {
    NSString *_actionName;
    NSMutableArray *_undoableCommands;
}

@property (readonly) ABAddressBook *addressBook;
@property BOOL shouldSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)build;
- (id)actionName;
- (void)visitCommand:(id)a0;
- (void)visitSaveCNRequestCommand:(id)a0;
- (void)visitSaveRequestCommand:(id)a0;
- (void)visitUndoableCommand:(id)a0;
- (void)visitUndoableSaveCNRequestCommand:(id)a0;
- (void)addCommand:(id)a0;
- (void)addCommands:(id)a0;
- (unsigned long long)countOfCommands;
- (id)initWithActionName:(id)a0 addressBook:(id)a1;
- (BOOL)containsSubCommands;
- (id)initWithActionName:(id)a0;
- (id)undoableCommands;

@end

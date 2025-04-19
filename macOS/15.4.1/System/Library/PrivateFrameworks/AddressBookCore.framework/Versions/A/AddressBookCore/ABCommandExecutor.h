@class NSUndoManager, NSString, ABCommandExecutionPolicy;

@interface ABCommandExecutor : NSObject <ABCommandExecutor, ABCommandVisitor> {
    ABCommandExecutionPolicy *_defaultPolicy;
}

@property (readonly, retain) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)executeCommand:(id)a0;
- (void)addCommandToUndoManager:(id)a0 withExecutorSelector:(SEL)a1;
- (void)doCommand:(id)a0;
- (id)initWithUndoManager:(id)a0 addressBook:(id)a1;
- (id)initWithUndoManager:(id)a0 addressBook:(id)a1 saveOnExecute:(BOOL)a2;
- (id)initWithUndoManager:(id)a0 defaultPolicy:(id)a1;
- (id)policyForCommand:(id)a0;
- (void)redoCommand:(id)a0;
- (void)removeAllCommands;
- (void)runPolicyForCommand:(id)a0 withCommandSelector:(SEL)a1;
- (void)runUndoTransaction:(id /* block */)a0;
- (void)undoCommand:(id)a0;
- (void)visitCommand:(id)a0;
- (void)visitSaveCNRequestCommand:(id)a0;
- (void)visitSaveRequestCommand:(id)a0;
- (void)visitUndoableCommand:(id)a0;
- (void)visitUndoableSaveCNRequestCommand:(id)a0;

@end

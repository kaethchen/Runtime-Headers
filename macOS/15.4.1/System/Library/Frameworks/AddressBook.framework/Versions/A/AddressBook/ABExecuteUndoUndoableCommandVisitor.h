@interface ABExecuteUndoUndoableCommandVisitor : ABUndoableCommandVisitor

- (void)visitCommand:(id)a0;
- (void)visitSaveCNRequestCommand:(id)a0;
- (void)visitSaveRequestCommand:(id)a0;
- (void)visitUndoableCommand:(id)a0;
- (void)visitUndoableSaveCNRequestCommand:(id)a0;

@end

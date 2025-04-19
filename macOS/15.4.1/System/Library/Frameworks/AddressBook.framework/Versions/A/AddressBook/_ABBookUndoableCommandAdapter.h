@protocol ABCommand;

@interface _ABBookUndoableCommandAdapter : ABBookUndoableCommand {
    id<ABCommand> _nonUndoableCommand;
}

- (void).cxx_destruct;
- (void)execute;
- (void)executeRedo;
- (void)executeUndo;
- (id)initWithNonUndoableCommand:(id)a0;

@end

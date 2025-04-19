@class NSUndoManager;

@interface ABUndoer : NSObject {
    NSUndoManager *_undoManager;
}

- (void).cxx_destruct;
- (void)_performRedoCommand:(id)a0 withName:(id)a1;
- (void)_performUndoCommand:(id)a0 withName:(id)a1;
- (id)initWithUndoManager:(id)a0;

@end

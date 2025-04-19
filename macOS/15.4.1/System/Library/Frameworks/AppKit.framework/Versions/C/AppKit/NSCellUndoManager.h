@class NSUndoManager;

@interface NSCellUndoManager : NSUndoManager {
    NSUndoManager *_nextUndoManager;
}

- (void)dealloc;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (void)redo;
- (id)redoMenuItemTitle;
- (void)undo;
- (id)undoMenuItemTitle;
- (void)setNextUndoManager:(id)a0;

@end

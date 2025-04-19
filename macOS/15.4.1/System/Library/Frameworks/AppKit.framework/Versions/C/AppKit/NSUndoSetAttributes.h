@class _NSAttributeRun;

@interface NSUndoSetAttributes : NSUndoTextOperation {
    _NSAttributeRun *_attributes;
}

- (void)dealloc;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textStorage:(id)a1 undoManager:(id)a2;
- (void)undoRedo:(id)a0;

@end

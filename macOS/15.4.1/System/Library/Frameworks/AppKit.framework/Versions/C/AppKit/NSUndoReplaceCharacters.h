@class NSAttributedString;

@interface NSUndoReplaceCharacters : NSUndoTextOperation {
    struct _NSRange { unsigned long long location; unsigned long long length; } _replacementRange;
    NSAttributedString *_attributedString;
}

- (void)dealloc;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textStorage:(id)a1 undoManager:(id)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 layoutManager:(id)a1 undoManager:(id)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)undoRedo:(id)a0;

@end

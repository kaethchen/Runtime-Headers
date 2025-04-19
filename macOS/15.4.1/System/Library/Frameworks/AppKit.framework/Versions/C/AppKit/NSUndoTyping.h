@class NSMutableAttributedString;

@interface NSUndoTyping : NSUndoTextOperation {
    struct _NSRange { unsigned long long location; unsigned long long length; } _replacementRange;
    NSMutableAttributedString *_attributedString;
}

- (void)dealloc;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textStorage:(id)a1 undoManager:(id)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)coalesceAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 text:(id)a3;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 layoutManager:(id)a1 undoManager:(id)a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)isSupportingCoalescing;
- (void)undoRedo:(id)a0;

@end

@class NSUndoManager, NSTextStorage;

@interface NSUndoTextOperation : NSObject {
    NSTextStorage *_textStorage;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } affectedRange;
@property (nonatomic) NSUndoManager *undoManager;

- (void)dealloc;
- (id)firstTextViewForTextStorage:(id)a0;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 layoutManager:(id)a1 undoManager:(id)a2;
- (id)initWithAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textStorage:(id)a1 undoManager:(id)a2;
- (BOOL)isSupportingCoalescing;
- (void)undoRedo:(id)a0;

@end

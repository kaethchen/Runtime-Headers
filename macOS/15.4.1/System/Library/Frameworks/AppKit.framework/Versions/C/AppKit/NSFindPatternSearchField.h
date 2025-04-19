@class NSString, NSFindPatternAttachmentCell;
@protocol NSFindPatternManager;

@interface NSFindPatternSearchField : NSTextFinderBarSearchField <NSFindPatternField> {
    NSFindPatternAttachmentCell *selectedAttachment;
}

@property id<NSFindPatternManager> findPatternManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStringValue:(id)a0;
- (id)regularExpression;
- (id)_uniquePatterns;
- (BOOL)_eventIsInsertPatternKeyEquivalent:(id)a0;
- (id)_fieldEditor;
- (id)_findPatternAttachmentForFindPattern:(id)a0;
- (void)_insertFindPattern:(id)a0;
- (void)_insertFindPatternAttachment:(id)a0;
- (void)_invalidateLayout;
- (BOOL)_isFindField;
- (id)_rangesOfFindPattern:(id)a0;
- (void)_selectedFindPattern:(id)a0;
- (void)_uniqueFindPatternsInAttributedStringAttachments:(id)a0;
- (void)_updateFindPatternsWithNewPatterns:(id)a0;
- (void)_updateReplacePatternsWithNewPatterns:(id)a0;
- (id)findField;
- (id)findPatternArray;
- (id)findPatternPropertyList;
- (BOOL)hasFindPattern;
- (void)insertNewFindPattern:(id)a0;
- (id)menuForFindPatternAttachment:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (id)plainTextValue;
- (BOOL)removeFindPattern:(id)a0;
- (id)replaceField;
- (id)replacementExpression;
- (void)setAttributedStringValue:(id)a0;
- (void)setFindPatternArray:(id)a0;
- (void)setFindPatternPropertyList:(id)a0;
- (void)textDidChange:(id)a0;
- (void)textView:(id)a0 clickedOnCell:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atIndex:(unsigned long long)a3;
- (void)textView:(id)a0 doubleClickedOnCell:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atIndex:(unsigned long long)a3;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)textView:(id)a0 shouldChangeTypingAttributes:(id)a1 toAttributes:(id)a2;

@end

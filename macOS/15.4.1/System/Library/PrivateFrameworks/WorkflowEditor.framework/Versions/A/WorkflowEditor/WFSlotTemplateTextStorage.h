@class NSFont, NSArray, NSTextAttachment, NSSet, NSColor, NSMutableSet, NSTextStorage, NSParagraphStyle;
@protocol WFSlotTemplateTextStorageDelegate;

@interface WFSlotTemplateTextStorage : NSTextStorage

@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (readonly, nonatomic) NSMutableSet *mutableHighlightedSlots;
@property (readonly, nonatomic) NSMutableSet *mutableSelectedSlots;
@property (readonly, nonatomic) NSMutableSet *mutableTypingSlots;
@property (nonatomic) unsigned long long editingLevel;
@property (weak) id<WFSlotTemplateTextStorageDelegate> delegate;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSFont *unpopulatedFont;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSColor *tintColor;
@property (copy, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSColor *disabledSlotTitleColor;
@property (readonly, nonatomic) NSColor *disabledSlotBackgroundColor;
@property (copy, nonatomic) NSArray *contents;
@property (readonly, nonatomic) long long contentsTextAlignment;
@property (retain, nonatomic) NSTextAttachment *disclosureAttachment;
@property (retain, nonatomic) NSTextAttachment *outputButtonAttachment;
@property (readonly, nonatomic) NSSet *highlightedSlots;
@property (readonly, nonatomic) NSSet *selectedSlots;
@property (readonly, nonatomic) NSSet *typingSlots;

- (id)init;
- (id)string;
- (void).cxx_destruct;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)beginEditing;
- (void)endEditing;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_updateColorsForSlot:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)attributedStringForSlot:(id)a0 isRTL:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForSlot:(id)a0 includingInsideSpacingOpportunities:(BOOL)a1;
- (void)didBeginTypingInSlot:(id)a0;
- (void)didDeselectSlot:(id)a0;
- (void)didEndTypingInSlot:(id)a0;
- (void)didHighlightSlot:(id)a0;
- (void)didSelectSlot:(id)a0;
- (void)didUnhighlightSlot:(id)a0;
- (void)enumerateContentInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)getColorsForSlot:(id)a0 titleColor:(out id *)a1 backgroundColor:(out id *)a2;
- (void)regenerateEntireAttributedString;
- (void)replaceAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceAttributeInInanimateText:(id)a0 value:(id)a1;
- (void)setDisabledSlotTitleColor:(id)a0 backgroundColor:(id)a1;
- (id)slotAtCharacterIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 effectiveContentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (BOOL)slotContainsStrongRTL:(id)a0;
- (unsigned long long)slotSpacingOpportunityAtCharacterIndex:(unsigned long long)a0;
- (id)stringForSlotSpacingOpportunity:(unsigned long long)a0;
- (void)updateColorsForAllSlots;
- (void)updateColorsForSlot:(id)a0;

@end

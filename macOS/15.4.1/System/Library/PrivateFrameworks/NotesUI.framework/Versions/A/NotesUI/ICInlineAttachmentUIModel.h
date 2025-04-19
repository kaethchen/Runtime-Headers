@class NSColor, ICInlineAttachment;

@interface ICInlineAttachmentUIModel : NSObject

@property (readonly, weak, nonatomic) ICInlineAttachment *attachment;
@property (readonly, nonatomic) NSColor *labelColor;
@property (readonly, nonatomic) BOOL fadesColorDuringHighlight;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)attributesForInlineAttachmentUIModel;
+ (id)filteredStyleAttributes:(id)a0;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)attributedStringWithSurroundingAttributes:(id)a0 formatter:(id /* block */)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })highlightRangeForTextFindingMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)highlightingAttributedString:(id)a0 withRegexMatches:(id)a1;
- (id)highlightingAttributedString:(id)a0 withSurroundingAttributes:(id)a1;

@end

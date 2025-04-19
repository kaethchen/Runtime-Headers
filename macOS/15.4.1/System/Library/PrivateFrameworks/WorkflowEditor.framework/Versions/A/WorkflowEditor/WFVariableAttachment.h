@class NSFont, NSString, WFSlotIdentifier, WFVariable, NSColor;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>

@property (readonly, nonatomic) WFVariable *variable;
@property (copy, nonatomic) id /* block */ fixUpBlock;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) NSFont *surroundingTextFont;
@property (copy, nonatomic) NSString *overrideVariableName;
@property (copy, nonatomic) WFSlotIdentifier *containingSlotIdentifier;
@property (nonatomic) BOOL standalone;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)_textAttachmentCell;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (id)initWithVariable:(id)a0;
- (id)variableName;
- (id)adjustedFont;
- (unsigned long long)currentControlState;
- (void)variableDidChange:(id)a0;

@end

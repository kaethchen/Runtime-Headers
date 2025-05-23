@class NSTextField, NSString, NSView, NSFont, NSColor;

@interface NSBox : NSView {
    struct CGSize { double width; double height; } _offsets;
    id _aux;
    BOOL _masksContentView;
    NSView *_contentView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _borderRect;
    id _titleCell;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _titleRect;
    struct __bFlags { unsigned char borderType : 2; unsigned char titlePosition : 3; unsigned char backgroundTransparent : 1; unsigned char orientation : 2; unsigned char needsTile : 1; unsigned char transparent : 1; unsigned char boxType : 3; unsigned char useSuperAddSubview : 1; unsigned int _RESERVED : 18; } _bFlags;
}

@property (readonly) unsigned long long _effectiveTitlePosition;
@property (readonly) double _effectiveBorderWidth;
@property (retain, setter=_setBackgroundView:) NSView *_backgroundView;
@property (retain, setter=_setTitleTextField:) NSTextField *_titleTextField;
@property unsigned long long boxType;
@property unsigned long long titlePosition;
@property (copy) NSString *title;
@property (retain) NSFont *titleFont;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleRect;
@property (readonly) id titleCell;
@property struct CGSize { double x0; double x1; } contentViewMargins;
@property (retain) NSView *contentView;
@property (getter=isTransparent) BOOL transparent;
@property double borderWidth;
@property double cornerRadius;
@property (copy) NSColor *borderColor;
@property (copy) NSColor *fillColor;

+ (void)initialize;
+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_updateSubviews;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundViewFrame;
- (Class)_classToCheckForWantsUpdateLayer;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_directlyAddSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)_invalidateSubviewsForStateChange;
- (BOOL)_isOldStyleBordered;
- (BOOL)_justDrawsAGrooveOnOneSide;
- (id)_maskDrawOptions;
- (BOOL)_needsBackgroundView;
- (BOOL)_needsTitleTextField;
- (void)_removeBackgroundView;
- (void)_removeTitleTextField;
- (BOOL)_separatorBoxIsHorizontal;
- (void)_setupAuxiliaryStorage;
- (void)_tile:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_titleTextFieldFrame;
- (void)_updateBackgroundView;
- (void)_updateCustomBackgroundView;
- (void)_updateMaskIfNeeded;
- (void)_updateOldStyleBackgroundView;
- (void)_updateSeparatorBackgroundView;
- (void)_updateThemeBoxBackgroundView;
- (void)_updateTitleTextField;
- (BOOL)_wantsBoxSubviews;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityContentsAttribute;
- (id)accessibilityHelpStringForChild:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySizeOfChild:(id)a0;
- (id)accessibilityTitleUIElementAttribute;
- (void)addSubview:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (unsigned long long)borderType;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)masksContentView;
- (id)ns_containerWidgetType;
- (id)ns_widgetType;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (void)setBackgroundColor:(id)a0;
- (void)setBorderType:(unsigned long long)a0;
- (void)setFrameFromContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMasksContentView:(BOOL)a0;
- (void)setTitleWithMnemonic:(id)a0;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (void)sizeToFit;
- (void)updateConstraints;
- (void)updateLayer;
- (void)viewWillDraw;
- (void)willRemoveSubview:(id)a0;

@end

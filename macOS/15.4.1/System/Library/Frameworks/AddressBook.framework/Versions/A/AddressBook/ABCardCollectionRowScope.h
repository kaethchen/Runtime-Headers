@class ABCardViewStyleProvider, NSArray, NSView, NSStackView, NSButton;
@protocol ABCardCollectionRowView;

@interface ABCardCollectionRowScope : CNWrappedDictionary

@property (readonly) NSView<ABCardCollectionRowView> *rowView;
@property (readonly) NSStackView *stackView;
@property (readonly) NSView *labelView;
@property (readonly) NSView *valueView;
@property (readonly) NSArray *actionGlyphButtons;
@property (readonly) NSView *messagingServiceView;
@property (readonly) NSView *accessoryView;
@property (readonly) NSView *plusButton;
@property (readonly) NSView *minusButton;
@property (readonly) NSButton *privacyCheckbox;
@property (readonly) ABCardViewStyleProvider *styleProvider;

- (id)initWithRowView:(id)a0 styleProvider:(id)a1;

@end

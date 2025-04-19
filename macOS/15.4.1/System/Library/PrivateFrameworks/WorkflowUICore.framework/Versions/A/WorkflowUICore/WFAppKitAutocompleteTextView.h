@class NSAttributedString;
@protocol WFAppKitAutocompleteTextViewDelegate, WFAppKitAutocompleteScrubberProvider;

@interface WFAppKitAutocompleteTextView : NSTextView

@property (weak) id<WFAppKitAutocompleteTextViewDelegate> delegate;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (weak, nonatomic) id<WFAppKitAutocompleteScrubberProvider> scrubberProvider;

+ (void)registerForServices;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertBacktab:(id)a0;
- (void)insertTab:(id)a0;
- (void)mouseDown:(id)a0;
- (void)paste:(id)a0;
- (BOOL)resignFirstResponder;
- (void)updateTouchBarItemIdentifiers;
- (id)attachmentAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end

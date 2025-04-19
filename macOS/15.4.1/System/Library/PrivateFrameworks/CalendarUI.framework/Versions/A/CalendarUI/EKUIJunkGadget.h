@class NSView, CalUIHyperlinkTextView;

@interface EKUIJunkGadget : EKUISingleViewGadget

@property (retain) NSView *junkView;
@property (retain) CalUIHyperlinkTextView *reportJunkText;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)adjustConstraintsInResponseToLayout;
- (id)makeJunkView;
- (void)reportJunk;
- (BOOL)shouldBeFullWidth;
- (BOOL)shouldDisplay;

@end

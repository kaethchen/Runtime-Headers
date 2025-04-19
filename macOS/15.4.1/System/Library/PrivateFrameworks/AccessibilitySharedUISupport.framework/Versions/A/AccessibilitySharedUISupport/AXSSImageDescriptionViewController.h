@class NSTextField, NSScrollView, NSFont, NSString, NSLayoutConstraint, NSTextView, NSButton;
@protocol AXSSImageDescriptionViewControllerDelegate;

@interface AXSSImageDescriptionViewController : NSViewController <NSTextViewDelegate>

@property (weak) NSTextField *titleView;
@property (weak) NSScrollView *textScrollView;
@property (weak) NSLayoutConstraint *textScrollViewHeight;
@property (weak) NSTextView *textView;
@property (weak) NSButton *cancelButton;
@property (retain, nonatomic) NSFont *textViewFont;
@property BOOL isSavingOrCancelling;
@property (copy, nonatomic) NSString *imageDescription;
@property (copy, nonatomic) NSString *placeholderText;
@property (weak, nonatomic) id<AXSSImageDescriptionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (struct CGSize { double x0; double x1; })idealContentSize;
- (void)saveChanges:(id)a0;
- (void)_updateTitleView;
- (void)_updateTextViewHeightConstraint;
- (void)cancelChanges:(id)a0;

@end

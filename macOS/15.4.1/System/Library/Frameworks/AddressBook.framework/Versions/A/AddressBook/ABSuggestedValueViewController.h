@class NSTextField, NSView, NSScrollView, ABSuggestedValueViewControllerSnippetHelper, CNLabeledValue, NSStackView, NSDateFormatter, NSButton, ABClickableTextView;
@protocol ABSuggestedValueViewControllerDelegate, CNCancelable;

@interface ABSuggestedValueViewController : NSViewController

@property (retain, nonatomic) NSStackView *verticalHeaderStackView;
@property (retain, nonatomic) NSTextField *senderField;
@property (retain, nonatomic) NSView *senderContainer;
@property (retain, nonatomic) NSTextField *subjectField;
@property (retain, nonatomic) NSView *subjectContainer;
@property (retain, nonatomic) NSTextField *dateField;
@property (retain, nonatomic) NSTextField *sourceItemView;
@property (retain, nonatomic) ABClickableTextView *relatedTextView;
@property (retain, nonatomic) NSScrollView *relatedTextViewScrollView;
@property (retain, nonatomic) ABSuggestedValueViewControllerSnippetHelper *snippetHelper;
@property (nonatomic) BOOL showsActionButtons;
@property (retain, nonatomic) NSButton *confirmButton;
@property (retain, nonatomic) NSButton *rejectButton;
@property id<ABSuggestedValueViewControllerDelegate> delegate;
@property (retain) CNLabeledValue *labeledValue;
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) id<CNCancelable> mouseDownObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setSubject:(id)a0;
- (void)awakeFromNib;
- (void)viewDidLayout;
- (void)viewWillAppear;
- (void)configureView;
- (void)setOriginURL:(id)a0;
- (void)setDateReceived:(id)a0;
- (void)setSenderName:(id)a0;
- (void)confirmSuggestedValue:(id)a0;
- (void)invalidateMouseDownObserver;
- (void)rejectSuggestedValue:(id)a0;
- (void)removeEmptyFields;
- (void)setFoundInAppName:(id)a0;
- (void)setSnippet:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setUpMouseDownObserverWithURL:(id)a0;

@end

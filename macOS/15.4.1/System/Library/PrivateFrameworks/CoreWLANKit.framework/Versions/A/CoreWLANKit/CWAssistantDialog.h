@class NSImageView, NSString, NSTextField, NSArray, NSTextView, NSButton;
@protocol CWAssistantDialogDelegate;

@interface CWAssistantDialog : NSWindowController <NSWindowDelegate, NSTextViewDelegate> {
    NSImageView *_imageView;
    NSTextField *_titleTF;
    NSTextView *_descriptionTV;
    NSTextField *_indexTF;
    NSTextField *_ofTF;
    NSTextField *_totalTF;
    NSButton *_previousButton;
    NSButton *_nextButton;
    NSButton *_cancelButton;
    NSArray *_recommendationItems;
    unsigned long long _currentIndex;
}

@property id<CWAssistantDialogDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (void)awakeFromNib;
- (void)windowDidLoad;
- (id)localizedStringForKey:(id)a0;
- (void)learnMoreButtonClicked:(id)a0;
- (void)onCancelButton:(id)a0;
- (void)updateHealthUIWithItem:(id)a0 initial:(BOOL)a1;
- (id)initWithRecommendationItems:(id)a0;
- (void)onNextButton:(id)a0;
- (void)onPreviousButton:(id)a0;

@end

@class NSArray, NSString, NUIContainerStackView, NSLayoutConstraint, NSTextView;
@protocol SearchUIFirstTimeExperienceDelegate;

@interface SearchUIFirstTimeExperienceViewController : NSViewController <NSTextViewDelegate>

@property (nonatomic) unsigned long long sizeClass;
@property (retain, nonatomic) NSArray *supportedDomains;
@property (retain, nonatomic) NSString *learnMoreString;
@property (retain, nonatomic) NSString *explanationString;
@property (retain, nonatomic) NSString *continueButtonString;
@property (retain, nonatomic) NSLayoutConstraint *textHeight;
@property (retain, nonatomic) NSLayoutConstraint *verticalCentering;
@property (retain, nonatomic) NSTextView *fteText;
@property (retain, nonatomic) NUIContainerStackView *fteImages;
@property (weak, nonatomic) id<SearchUIFirstTimeExperienceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (void)loadView;
- (id)textView:(id)a0 willDisplayToolTip:(id)a1 forCharacterAtIndex:(unsigned long long)a2;
- (void)viewDidLoad;
- (void)firstTimeExperienceContinueButtonPressed:(id)a0;
- (id)initWithSizeClass:(unsigned long long)a0 domains:(id)a1 explanationText:(id)a2 learnMoreText:(id)a3 continueButtonTitle:(id)a4;
- (void)layoutFTETextIfNeeded;

@end

@class NSString, NSTextField;

@interface UINSOnboardingTextView : NSView {
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
}

@property (retain, nonatomic) NSString *onboardingTitle;
@property (retain, nonatomic) NSString *onboardingDescription;
@property (nonatomic) BOOL isRightAligned;

- (id)init;
- (void).cxx_destruct;
- (void)_setupLabels;
- (id)initWithTitle:(id)a0 description:(id)a1;

@end

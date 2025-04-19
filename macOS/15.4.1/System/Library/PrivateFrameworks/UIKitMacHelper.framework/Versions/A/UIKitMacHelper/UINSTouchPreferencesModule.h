@class NSTextField, NSArray, UINSInputAlternativesEducationViewController, NSPopUpButton, NSStackView;

@interface UINSTouchPreferencesModule : UINSPreferencesModule {
    UINSInputAlternativesEducationViewController *_educationViewController;
    NSArray *_filteredOnboardingClasses;
}

@property (weak) NSStackView *taStackView;
@property (weak) NSTextField *showFilteredLabel;
@property (weak) NSPopUpButton *showFilteredButton;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)toggleEducationVisibility:(id)a0;
- (void)turnTouchAlternativesOn:(id)a0;
- (void)updateEducationViewControllerEnabledState;

@end

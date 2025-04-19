@class NSString, SiriUIAcousticIDSpinner, SiriUIContentLabel, NSMutableArray, NSColor;
@protocol SiriUISuggestionsViewDelegate;

@interface SiriUISuggestionsView : NSView {
    SiriUIContentLabel *_headerLabel;
    SiriUIContentLabel *_oldHeaderLabel;
    SiriUIContentLabel *_subheaderLabel;
    SiriUIContentLabel *_largeSubheaderLabel;
    BOOL _firstSuggestionPresentation;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    BOOL _useSmallText;
    NSMutableArray *_allConstraints;
}

@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *subheaderText;
@property (copy, nonatomic) NSString *largeSubheaderText;
@property (copy, nonatomic) NSColor *textColor;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) BOOL useSmallText;
@property (nonatomic) BOOL springAnimateIn;
@property (weak, nonatomic) id<SiriUISuggestionsViewDelegate> delegate;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isFlipped;
- (void)updateConstraints;
- (double)_headerFontSize;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_animateHeaderIn;
- (void)_animateHeaderOut;
- (double)_headerToLargeSubheaderOffset;
- (double)_headerToSubheaderOffset;
- (double)_largeSubheaderFontSize;
- (void)_loadSubheaderViewIfNeeded;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (void)_reallyShowAcousticIDSpinner;
- (double)_subheaderFontSize;
- (double)_suggestionFontSize;
- (double)_suggestionSpacing;
- (void)_updateHeaderFontSize;
- (void)acousticIDSpinnerDidHide:(id)a0;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (void)hideAcousticIDSpinner;
- (void)showAcousticIDSpinner;

@end

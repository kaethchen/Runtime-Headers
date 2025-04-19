@class SGSuggestionAction, NSString, NSArray, NSAttributedString, NSVisualEffectView, SGSuggestionStore, NSColor, _TtC17CoreSuggestionsUI26SGBannerContentHostingView, _TtC17CoreSuggestionsUI15SGBannerContent, SGBannerDividerParameter;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface SGBannerView : NSView <SGBannerProtocol>

@property (readonly, nonatomic) _TtC17CoreSuggestionsUI26SGBannerContentHostingView *bannerHostingView;
@property (retain, nonatomic) _TtC17CoreSuggestionsUI15SGBannerContent *banner;
@property (nonatomic) BOOL orientationChanged;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) long long accessoryType;
@property (copy, nonatomic) SGSuggestionAction *primaryAction;
@property (copy, nonatomic) id<SGSuggestion> suggestion;
@property (weak, nonatomic) id<SGSuggestionDelegate> delegate;
@property (copy, nonatomic) SGSuggestionStore *suggestionStore;
@property (nonatomic) long long actionButtonType;
@property (nonatomic) BOOL suggestionCategorySupportsBatchDismissal;
@property (copy, nonatomic) NSVisualEffectView *backgroundVisualEffectView;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) SGBannerDividerParameter *bannerDivider;
@property (copy, nonatomic) SGSuggestionAction *dismissAction;
@property (nonatomic) BOOL prominentActionButton;
@property (copy, nonatomic) NSArray *iconSFSymbols;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)reload;
- (double)actionButtonLeadingEdgeOffset;
- (double)closeButtonXAnchorOffset;
- (void)invalidateBannerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverSourceRect;
- (void)setCloseButtonXAnchorOffset:(double)a0;

@end

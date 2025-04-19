@class VKCImageAnalysis, NSArray, NSString, NSMutableArray;
@protocol VKCVisualSearchCornerViewDelegate;

@interface VKCVisualSearchCornerView : VKCTappableView <VKCCornerLookupButtonDelegate>

@property (retain, nonatomic) NSArray *cornerResultItems;
@property (retain, nonatomic) NSMutableArray *cornerButtons;
@property (copy, nonatomic) NSString *_customAnalyticsIdentifier;
@property (readonly, nonatomic) double windowScale;
@property (readonly, nonatomic) double buttonSpacing;
@property (retain, nonatomic) VKCImageAnalysis *analysis;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedVisibleRect;
@property (weak, nonatomic) id<VKCVisualSearchCornerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_itemObscuredByViewport:(id)a0;
- (id)_resultItems;
- (void)_showCornerLookupButtonsForResults:(id)a0;
- (void)_updateButtonFramesWithScale:(double)a0;
- (void)addMetadataToVSFeedbackItem:(id)a0;
- (void)automaticallyShowVisualSearchResultsIfApplicable;
- (void)generateVisualSearchResultForItems:(id)a0 queryID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)invalidateButtonsForResults;
- (void)lookupButton:(id)a0 didProcessResultWithDuration:(double)a1;
- (void)lookupButton:(id)a0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)lookupButtonDidDismissController:(id)a0;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)a0;
- (void)sendProcessingAnalyticsEventEventWithItem:(id)a0 duration:(double)a1;
- (void)showVisualSearchResultView;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)a0 userFeedbackPayload:(id)a1 sfReportData:(id)a2;

@end

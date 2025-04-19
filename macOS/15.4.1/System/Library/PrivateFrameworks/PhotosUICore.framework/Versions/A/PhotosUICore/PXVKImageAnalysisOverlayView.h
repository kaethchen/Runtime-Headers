@class NSView, NSImage, NSArray;
@protocol PXVKImageAnalysisOverlayViewDelegate, PXVKImageAnalysis;

@interface PXVKImageAnalysisOverlayView : NSView

@property (weak, nonatomic) id<PXVKImageAnalysisOverlayViewDelegate> delegate;
@property (nonatomic) unsigned long long activeInteractionTypes;
@property (retain, nonatomic) id<PXVKImageAnalysis> analysis;
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly, nonatomic) NSView *visualSearchCornerView;
@property (nonatomic) BOOL didAddVisualSearchCornerView;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL actionInfoViewHidden;
@property (readonly, nonatomic) BOOL isSubjectHighlightAvailable;
@property (nonatomic) BOOL subjectHighlightActive;
@property (retain, nonatomic) NSImage *_photosImageForRemoveBackground;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } actionInfoEdgeInsets;
@property (readonly, nonatomic) NSArray *visualSearchResultItems;

- (void).cxx_destruct;
- (BOOL)interactableItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resetSelection;
- (void)updateActionInfoLayout;
- (void)beginImageSubjectAnalysisIfNecessary;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)loadImageSubjectIfAvailableWithCompletion:(id /* block */)a0;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)imageSubjectExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)actionInfoItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showVisualSearchForResultItem:(id)a0;

@end

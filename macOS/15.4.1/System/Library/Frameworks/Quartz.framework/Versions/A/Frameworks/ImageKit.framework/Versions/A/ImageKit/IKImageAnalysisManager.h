@class VKCImageAnalyzer, NSString, VKCImageAnalysisOverlayView, NSURL, NSData, IKImageContentView;

@interface IKImageAnalysisManager : NSObject <VKCImageAnalysisOverlayViewDelegate>

@property (retain) VKCImageAnalyzer *imageAnalyzer;
@property (retain) VKCImageAnalysisOverlayView *overlayView;
@property (retain) NSURL *overrideImageURL;
@property (retain) NSData *overrideImageData;
@property (nonatomic) BOOL needsToBeginImageSubjectAnalysis;
@property (weak, nonatomic) IKImageContentView *imageContentView;
@property (nonatomic) BOOL inhibitAutomaticReanalysis;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } analysisContentsRect;
@property (readonly) BOOL hasActiveTextSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_exifToVKImageOrientation:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingHasActiveTextSelection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)copy:(id)a0;
- (void)selectAll:(id)a0;
- (BOOL)hasBeenProcessed;
- (void)forceReanalysisWithFlattenedImageData:(id)a0;
- (BOOL)hasResultsForAnalysisTypes:(unsigned long long)a0;
- (void)removeCurrentAnalysis;
- (id)contentViewForImageAnalysisOverlayView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForImageAnalysisOverlayView:(id)a0;
- (BOOL)imageAnalysisOverlay:(id)a0 shouldShowMenuForEvent:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)imageAnalysisOverlayDidCompleteSubjectAnalysis:(id)a0;
- (BOOL)imageAnalysisOvlerlayView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (void)resetSelection;
- (id)_getAnalyzerRequest;
- (void)_updateWithInteractionTypes:(unsigned long long)a0;
- (void)beginImageSubjectAnalysisIfNecessary;
- (void)copySubject;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)forceReanalysisWithFlattenedImageAtURL:(id)a0;
- (void)hideActionInfoViewAnimated:(BOOL)a0;
- (void)hideAllInteractions;
- (void)imageViewChanged:(id)a0;
- (id)locationForCGImageSource:(struct CGImageSource { } *)a0 properties:(id)a1;
- (void)refreshImageOverlayWithInteraction:(unsigned long long)a0 needsReanalysis:(BOOL)a1;
- (void)showActionInfoViewAnimated:(BOOL)a0;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end

@class AKController, AKCandidatePickerViewController, CHRecognizer, AKPageModelController, AKAnnotation, NSMutableDictionary, CHDrawing, NSString, NSMutableArray, NSPopover;
@protocol AKShapeDetectionControllerDelegate;

@interface AKShapeDetectionController : NSObject <NSPopoverDelegate>

@property (retain, nonatomic) CHDrawing *lastDrawing;
@property double veryHighConfidenceLevel;
@property (retain, nonatomic) CHDrawing *candidateDrawing;
@property (retain, nonatomic) NSMutableArray *candidateAKTags;
@property (retain, nonatomic) NSMutableDictionary *candidateAKTagsToAnnotationInfoMap;
@property (retain) NSPopover *candidatePopover;
@property (retain) AKCandidatePickerViewController *candidateViewController;
@property (weak, nonatomic) id<AKShapeDetectionControllerDelegate> delegate;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) AKAnnotation *candidateAnnotation;
@property (retain, nonatomic) CHRecognizer *shapeRecognizer;
@property (readonly, nonatomic) BOOL isShowingCandidatePicker;
@property (nonatomic) BOOL preferDoodle;
@property (nonatomic) BOOL coalescesDoodles;
@property (nonatomic, getter=shapeDetectionEnabled) BOOL shapeDetectionEnabled;
@property BOOL isPreviousCandidateAnnotationUndecided;
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForAnnotationsAndSelections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)drawingIsValidForRecognition:(id)a0 withPath:(struct CGPath { } *)a1;
+ (void)logAllResults:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithController:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillShow:(id)a0;
- (long long)_toolTagForCHRecognitionResult:(id)a0;
- (id)_createAnnotationWithRecognizerResult:(id)a0 forDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 shouldGoToPageController:(id *)a2;
- (id)_createDoodleShapeResultWithPath:(struct CGPath { } *)a0 withDrawingCenter:(struct CGPoint { double x0; double x1; })a1 pathIsPrestroked:(BOOL)a2;
- (id)_createFlippedCHDrawingFromCHDrawing:(id)a0 withDrawingCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)_idealPositioningOptionsForAnnotation:(id)a0 fromDrawing:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 edge:(unsigned long long *)a3 orientation:(long long *)a4;
- (BOOL)_isResultVeryHighConfidence:(id)a0;
- (void)_performRecognitionOnDrawing:(id)a0 withInkDrawing:(id)a1 orWithDoodlePath:(struct CGPath { } *)a2 boundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 center:(struct CGPoint { double x0; double x1; })a4 isPrestroked:(BOOL)a5 optionalAnnotation:(id)a6;
- (void)_shouldDismissNotification:(id)a0;
- (void)_showCandidatePickerWithTypes:(id)a0 forDrawingInInputView:(id)a1 shouldSurfaceDoodle:(BOOL)a2;
- (void)_teardownCandidatePicker;
- (void)clearPreviousCandidateAnnotation;
- (id)convertDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outBoundsInPageModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)createInkResultFromInkDrawing:(id)a0 annotation:(id)a1;
- (void)dismissCandidatePicker;
- (void)performRecognitionOnDrawing:(id)a0 withDrawing:(id)a1 annotation:(id)a2 boundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 center:(struct CGPoint { double x0; double x1; })a4;
- (void)performRecognitionOnDrawing:(id)a0 withPath:(struct CGPath { } *)a1 boundsInInputView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 center:(struct CGPoint { double x0; double x1; })a3 isPrestroked:(BOOL)a4;

@end

@class NSDictionary;

@interface AUGenericView : NSView <AUCustomViewPersistentData> {
    void *_reserved[32];
}

@property (readonly) struct OpaqueAudioComponentInstance { } *audioUnit;
@property BOOL showsExpertParameters;
@property (nonatomic) NSDictionary *customViewPersistentData;

+ (id)getTextFieldWithText:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)cleanup;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)mouseDown:(id)a0;
- (BOOL)mouseDownCanMoveWindow;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)rebuildUI;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 displayFlags:(unsigned int)a1;
- (unsigned int)parameterCountForScope:(unsigned int)a0 element:(unsigned int)a1;
- (void)refreshHistory:(id)a0;
- (float)addAUTitleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)addParameterTitleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)addPropertiesAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)addPropertyTitleAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)addScopeSelectorAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (float)addThreadedLoadingWidgetsAtPoint:(struct CGPoint { double x0; double x1; })a0 withParameterCount:(unsigned int)a1;
- (void)adjustClumpHeights:(id)a0;
- (void)assembleView;
- (unsigned int)assessScopedElementsWithParametersAndReturnTotalNumberOfParameters;
- (void)createHistoryUpdatesTimer;
- (void)createParameterClumpsIsThreaded:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)createParameterStripsIsThreaded:(BOOL)a0;
- (void)createScheduledUpdatesTimer;
- (void)destroyView;
- (float)displayParameterClumpsForSegment:(int)a0 fromSegmentChangeEvent:(BOOL)a1;
- (void)eventListenerPropertyCallbackWithEvent:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a0;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 size:(struct CGSize { double x0; double x1; })a1 displayFlags:(unsigned int)a2 displayData:(id)a3;
- (id)nameForScope:(unsigned int)a0 element:(unsigned int)a1;
- (void)performCommonInitialization;
- (void)periodicUpdates:(id)a0;
- (void)privUpdateColumnWidths;
- (void)removeHistoryUpdatesTimer;
- (void)removeScheduledUpdatesTimer;
- (void)scopeSelectionButtonPressed:(id)a0;
- (void)setFilteredParameterList:(id)a0 exclude:(BOOL)a1;
- (void)setProgressIndicatorIndeterminate;
- (void)setShowsExpertParameters;
- (void)setViewAppearanceProperties:(id)a0;
- (void)showExpertParams:(id)a0;
- (void)showExpertParamsDisclosureTriangle;
- (void)showExpertParamsHelper;
- (void)sizeHeaderComponentsToSize:(struct CGSize { double x0; double x1; })a0 andHeader:(BOOL)a1;
- (void)sizeViewForAllParameters:(struct CGSize { double x0; double x1; })a0;
- (void)workhorseAssembly:(id)a0;
- (void)workhorseAssemblyFinalViewUpdates;

@end

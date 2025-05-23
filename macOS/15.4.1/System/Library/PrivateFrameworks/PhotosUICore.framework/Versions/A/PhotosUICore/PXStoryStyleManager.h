@class NSString, NSArray, PXStoryRecipeManager, PXUpdater, PXStoryStyleConfiguration, PXStoryStyleSelectionDataSource, NSObject, PXStoryStyleConfigurationList;
@protocol PXStoryColorGradingRepository, PXStoryStyle, OS_dispatch_queue, PXStoryErrorReporter, PXStoryStyleProducer, PXAudioCueSource, PXAudioCueProvider;

@interface PXStoryStyleManager : PXObservable <PXStoryMutableStyleManager, PXChangeObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) id<PXStoryStyleProducer> styleProducer;
@property (readonly, nonatomic) struct { unsigned long long croppingOptions; BOOL preferStillKeySegment; } styleOptions;
@property (retain, nonatomic) PXStoryStyleConfigurationList *styleConfigurationList;
@property (nonatomic) unsigned long long stylesAttributes;
@property (nonatomic) BOOL areStylesFinal;
@property (nonatomic) unsigned long long selectionDataSourceStylesAttributes;
@property (nonatomic) BOOL areSelectionDataSourceStylesFinal;
@property (retain, nonatomic) id<PXAudioCueSource> cueSource;
@property (nonatomic) long long cueRequestID;
@property (retain, nonatomic) PXStoryStyleConfiguration *currentStyleInfo;
@property (copy, nonatomic) NSArray *predefinedStyleInfos;
@property (retain, nonatomic) id<PXAudioCueProvider> cueProvider;
@property (readonly, nonatomic) PXStoryRecipeManager *recipeManager;
@property (readonly, nonatomic) id<PXStoryColorGradingRepository> colorGradingRepository;
@property (readonly, nonatomic) id<PXStoryStyle> currentStyle;
@property (readonly, nonatomic) unsigned long long currentStyleAttributes;
@property (readonly, nonatomic) BOOL isCurrentStyleFinal;
@property (readonly, nonatomic) unsigned long long changesOrigin;
@property (readonly, nonatomic) PXStoryStyleSelectionDataSource *selectionDataSource;
@property (readonly, nonatomic) double selectionFocus;
@property (readonly, nonatomic) long long focusedStyleIndex;
@property (readonly, nonatomic) BOOL focusedStyleIsCurrentStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)setCurrentStyle:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_invalidatePredefinedStyleInfos;
- (void)_handleCueSource:(id)a0 error:(id)a1 requestID:(long long)a2;
- (void)_invalidateCueSource;
- (void)_invalidateCurrentStyle;
- (void)_invalidateCurrentStyleAttributes;
- (void)_invalidateCurrentStyleInfo;
- (void)_invalidateSelectionDataSource;
- (void)_invalidateSelectionDataSourceAttributes;
- (void)_invalidateStyleConfigurationList;
- (void)_invalidateStylesAttributes;
- (void)_updateCueSource;
- (void)_updateCurrentStyle;
- (void)_updateCurrentStyleAttributes;
- (void)_updateCurrentStyleInfo;
- (void)_updatePredefinedStyleInfos;
- (void)_updateSelectionDataSource;
- (void)_updateSelectionDataSourceStylesAttributes;
- (void)_updateStyleConfigurationList;
- (void)_updateStylesAttributes;
- (void)applyFocusedStyle;
- (void)applyFocusedStyleWithCustomizedColorGradeKind:(long long)a0;
- (void)applyFocusedStyleWithCustomizedSongResource:(id)a0;
- (void)applyStyleAtIndex:(long long)a0 fromDataSource:(id)a1;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)didEndChangeHandling;
- (id)initWithRecipeManager:(id)a0 errorReporter:(id)a1;
- (void)performChanges:(id /* block */)a0 origin:(unsigned long long)a1;
- (void)setCurrentStyleAttributes:(unsigned long long)a0;
- (void)setIsCurrentStyleFinal:(BOOL)a0;
- (void)setSelectionDataSource:(id)a0;
- (void)setSelectionFocus:(double)a0;

@end

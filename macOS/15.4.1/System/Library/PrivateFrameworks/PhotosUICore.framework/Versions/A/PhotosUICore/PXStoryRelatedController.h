@class PXStoryModel, PXStoryConfiguration, NSProgress, PXStoryViewModel, PXStoryProducerResult, NSSet;
@protocol PXStoryRelatedProducer;

@interface PXStoryRelatedController : PXStoryController <PXStoryMutableRelatedController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) id<PXStoryRelatedProducer> relatedProducer;
@property (retain, nonatomic) PXStoryConfiguration *mainConfiguration;
@property (retain, nonatomic) PXStoryModel *mainModel;
@property (readonly, nonatomic) BOOL canStartProducingRelated;
@property (readonly, nonatomic) BOOL isProductionEnabled;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) PXStoryProducerResult *result;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSSet *recentlyUsedFlexSongIDs;
@property (readonly, nonatomic) NSSet *recentlyUsedAppleMusicSongIDs;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setResult:(id)a0;
- (void)setIsActive:(BOOL)a0;
- (void)setProgress:(id)a0;
- (id)initWithViewModel:(id)a0;
- (void)_handleResult:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateCanStartProducingRelated;
- (void)_invalidateCanStartProducingRelated;
- (void)_invalidateMainConfiguration;
- (void)_invalidateMainModel;
- (void)_invalidateRelatedConfigurations;
- (void)_updateMainConfiguration;
- (void)_updateMainModel;
- (void)_updateRelatedConfigurations;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)configureUpdater:(id)a0;
- (id)detailedDebugInformation;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;
- (void)setCanStartProducingRelated:(BOOL)a0;
- (void)setIsProductionEnabled:(BOOL)a0;
- (void)setRecentlyUsedAppleMusicSongIDs:(id)a0;
- (void)setRecentlyUsedFlexSongIDs:(id)a0;

@end

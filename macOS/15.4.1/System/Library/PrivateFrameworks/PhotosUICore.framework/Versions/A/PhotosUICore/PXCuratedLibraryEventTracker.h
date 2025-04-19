@class NSString, PXCuratedLibraryLayout, NSMutableDictionary, PXSectionedObjectReference, PXCuratedLibraryViewModel, NSTimer;

@interface PXCuratedLibraryEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXCuratedLibraryEventTracker> {
    BOOL _loggedFirstTimeExperience;
    NSTimer *_slowScrollRegimeTimer;
}

@property (nonatomic) long long currentlyViewedZoomLevel;
@property (nonatomic) long long currentZoomLevelSignpost;
@property (retain, nonatomic) NSString *currentAllPhotosZoomStateName;
@property (nonatomic) long long currentAllPhotosZoomStateSignpost;
@property (retain, nonatomic) PXSectionedObjectReference *dominantObjectReference;
@property (nonatomic) long long libraryItemsCount;
@property (nonatomic) float analysisProgress;
@property (nonatomic) float firstTimeExperienceAnalysisProgress;
@property (nonatomic) long long firstTimeExperienceLibraryItemsCount;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSMutableDictionary *payload;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateCurrentlyViewedZoomLevel;
- (void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
- (void)_invalidateCurrentAllPhotosZoomState;
- (void)_invalidateCurrentlyViewedZoomLevel;
- (void)_invalidateDominantObjectReference;
- (void)_invalidateFirstTimeExperienceReadinessLogging;
- (void)_logDidEndViewingAllPhotosZoomStateName:(id)a0;
- (void)_logDidEndViewingZoomLevel:(long long)a0;
- (void)_logDidStartViewingAllPhotosZoomStateName:(id)a0;
- (void)_logDidStartViewingZoomLevel:(long long)a0;
- (void)_updateCurrentAllPhotosZoomState;
- (void)_updateDominantObjectReference;
- (void)_updateFirstTimeExperienceReadinessLogging;
- (id)initWithViewModel:(id)a0 layout:(id)a1;
- (id)initWithViewName:(id)a0;
- (void)logAnalysisProgress:(float)a0;
- (void)logLibraryItemsCount:(long long)a0;

@end

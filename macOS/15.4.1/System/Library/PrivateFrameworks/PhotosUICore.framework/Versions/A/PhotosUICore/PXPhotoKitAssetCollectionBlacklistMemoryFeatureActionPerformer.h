@class NSString, PXSuggestLessPeopleHelper;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXSuggestLessPeopleHelperDelegate>

@property (retain, nonatomic) NSString *userResponse;
@property (nonatomic) BOOL isBlockingMemoryFeature;
@property (retain, nonatomic) PXSuggestLessPeopleHelper *suggestLessPeopleHelper;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (id)_memoryFeatureFromMemory:(id)a0 forActionType:(id)a1;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)a0;
- (void)applyBlacklistFeatureWithActionType:(id)a0;
- (void)confirmBlacklistingUserAction:(id)a0 viewSpec:(id)a1;
- (void)performBackgroundTask;
- (void)suggestLessPeopleInMemory:(id)a0;

@end

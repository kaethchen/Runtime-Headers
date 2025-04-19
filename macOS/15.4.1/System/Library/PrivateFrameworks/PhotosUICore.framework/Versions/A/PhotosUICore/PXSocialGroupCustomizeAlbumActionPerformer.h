@interface PXSocialGroupCustomizeAlbumActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ initialPeople;
    void /* unknown type, empty encoding */ creationCompletionBlock;
    void /* unknown type, empty encoding */ addPeoplePerformer;
}

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;

@end

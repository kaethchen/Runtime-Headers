@interface PhotosUICore.SocialGroupReorderGroupActionPerformer : PXAssetCollectionActionPerformer {
    void /* unknown type, empty encoding */ sourceGroup;
    void /* unknown type, empty encoding */ destinationIndex;
}

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (void)performBackgroundTask;

@end

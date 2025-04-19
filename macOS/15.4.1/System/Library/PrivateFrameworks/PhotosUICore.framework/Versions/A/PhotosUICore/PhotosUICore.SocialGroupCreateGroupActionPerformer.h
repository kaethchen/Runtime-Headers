@interface PhotosUICore.SocialGroupCreateGroupActionPerformer : PXAssetCollectionActionPerformer {
    void /* unknown type, empty encoding */ customTitle;
    void /* unknown type, empty encoding */ keyAssetUUID;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ creationCompletionBlock;
    void /* unknown type, empty encoding */ mutationActionDelegate;
}

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (void)performBackgroundTask;

@end

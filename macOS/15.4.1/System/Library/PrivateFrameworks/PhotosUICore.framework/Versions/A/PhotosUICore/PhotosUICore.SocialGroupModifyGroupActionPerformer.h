@interface PhotosUICore.SocialGroupModifyGroupActionPerformer : PXAssetCollectionActionPerformer {
    void /* unknown type, empty encoding */ mutationActionDelegate;
    void /* unknown type, empty encoding */ newKeyAsset;
    void /* unknown type, empty encoding */ newCustomTitle;
    void /* unknown type, empty encoding */ customTitleWasDeleted;
    void /* unknown type, empty encoding */ peopleToBeAdded;
    void /* unknown type, empty encoding */ peopleToBeRemoved;
}

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;
- (void)performBackgroundTask;

@end

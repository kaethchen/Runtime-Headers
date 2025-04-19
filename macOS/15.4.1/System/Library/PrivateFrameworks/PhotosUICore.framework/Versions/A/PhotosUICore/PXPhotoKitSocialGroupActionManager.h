@interface PXPhotoKitSocialGroupActionManager : PXActionManager {
    void /* unknown type, empty encoding */ socialGroups;
    void /* unknown type, empty encoding */ photoLibrary;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (id)contextMenuElementsWithHandler:(id /* block */)a0;
- (id)actionPerformerForActionType:(id)a0 parameters:(id)a1;
- (id)actionTypeForGenericType:(id)a0;
- (id)initWithSocialGroups:(id)a0 photoLibrary:(id)a1;
- (BOOL)isDestructiveActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (id)systemImageNameForActionType:(id)a0;

@end

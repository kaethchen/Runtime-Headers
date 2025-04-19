@class NSString;

@interface PXCreateSocialGroupAction : PXPhotosAction {
    void /* unknown type, empty encoding */ people;
    void /* unknown type, empty encoding */ customTitle;
    void /* unknown type, empty encoding */ keyAssetUUID;
    void /* unknown type, empty encoding */ socialGroupIdentifier;
    void /* unknown type, empty encoding */ modifiedGroups;
    void /* unknown type, empty encoding */ creationCompletionBlock;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *localizedActionName;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithPeople:(id)a0 customTitle:(id)a1 keyAssetUUID:(id)a2 creationCompletionBlock:(id /* block */)a3;

@end

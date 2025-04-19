@class NSString;

@interface PhotosUICore.SocialGroupReorderAction : PXPhotosAction {
    void /* unknown type, empty encoding */ sourceGroup;
    void /* unknown type, empty encoding */ destinationGroups;
    void /* unknown type, empty encoding */ destinationIndex;
    void /* unknown type, empty encoding */ modifiedGroups;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *localizedActionName;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performUndo:(id /* block */)a0;

@end

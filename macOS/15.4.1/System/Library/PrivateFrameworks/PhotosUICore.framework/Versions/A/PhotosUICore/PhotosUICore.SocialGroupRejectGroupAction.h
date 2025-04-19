@class NSString;

@interface PhotosUICore.SocialGroupRejectGroupAction : PXPhotosAction {
    void /* unknown type, empty encoding */ socialGroup;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *localizedActionName;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performUndo:(id /* block */)a0;

@end

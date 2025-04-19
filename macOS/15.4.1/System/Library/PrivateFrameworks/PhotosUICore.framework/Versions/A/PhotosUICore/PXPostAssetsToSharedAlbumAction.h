@class PHCloudSharedAlbum, NSString;

@interface PXPostAssetsToSharedAlbumAction : PXAssetsAction {
    PHCloudSharedAlbum *_sharedAlbum;
    NSString *_comment;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithSharedAlbum:(id)a0 assets:(id)a1 comment:(id)a2;
- (id)presentationEnvironment;

@end

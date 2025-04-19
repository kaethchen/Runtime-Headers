@class PHCloudSharedAlbum, NSArray, NSString;

@interface PXPostFilesToSharedAlbumAction : PXPhotosAction {
    PHCloudSharedAlbum *_sharedAlbum;
    NSArray *_fileURLs;
    NSString *_comment;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithSharedAlbum:(id)a0 fileURLs:(id)a1 comment:(id)a2;

@end

@class NSImageView, NSString, NSClickGestureRecognizer, CALayer;

@interface IKCameraCollectionViewItem : NSCollectionViewItem <ICCameraDeviceDownloadDelegate> {
    NSImageView *_imageView;
}

@property (retain, nonatomic) NSClickGestureRecognizer *clickGestureRecognizer;
@property (retain, nonatomic) NSClickGestureRecognizer *doubleClick;
@property (retain, nonatomic) CALayer *selectedLayer;
@property (retain, nonatomic) CALayer *downloadedLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)prepareForReuse;
- (id)animationForKey:(id)a0;
- (id)draggingImageComponents;
- (BOOL)isSelectable;
- (BOOL)isSelected;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (BOOL)isDownloaded;
- (void)badgeIconWithImage:(id)a0 onLayer:(unsigned long long)a1;
- (id)checkmarkImageWithColor:(id)a0;
- (void)didDownloadFile:(id)a0 error:(id)a1 options:(id)a2 contextInfo:(void *)a3;
- (void)disableDoubleClick;
- (void)enableDoubleClick;
- (void)installGestureRecognizer;
- (void)onDoubleClick:(id)a0;
- (void)removeBadgeOnLayer:(unsigned long long)a0;
- (void)toggleSelection:(id)a0;
- (void)uninstallGestureRecognizer;
- (void)updateBadgeLocation;
- (void)updateDownloadBadge;

@end

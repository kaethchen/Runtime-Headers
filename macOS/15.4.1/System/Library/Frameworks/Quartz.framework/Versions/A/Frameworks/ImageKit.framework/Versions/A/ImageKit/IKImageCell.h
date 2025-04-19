@interface IKImageCell : NSObject {
    id _reserved;
}

+ (id)currentRequestingViewIdentifier;
+ (BOOL)allowsIconSharingForThumbnailRequest:(id)a0;
+ (BOOL)delegatesImageManagementToDatasource;
+ (void)setCurrentRequestingViewIdentifier:(id)a0;
+ (void)setDelegatesImageManagementToDatasource:(BOOL)a0;
+ (void)setTrackingOfRequestingViewsEnabled:(BOOL)a0;
+ (BOOL)trackingOfRequestingViewsEnabled;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)version;
- (id)image;
- (id)parent;
- (id)representedItem;
- (float)alpha;
- (id)dataSource;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)reloadData;
- (void)setAlpha:(float)a0;
- (void)setDataSource:(id)a0;
- (id)thumbnailImage;
- (void)setParent:(id)a0;
- (id)subtitleString;
- (id)titleString;
- (BOOL)_representationTypeCanBePlayed:(id)a0;
- (BOOL)imageIsImported;
- (unsigned long long)dataSourceIndex;
- (unsigned long long)_createNewEntryInCache:(id)a0;
- (id)_delegatedImageToDraw;
- (BOOL)_shareIconIfPossible:(id)a0;
- (BOOL)_shareIconRef:(struct OpaqueIconRef { } *)a0;
- (int)bestImageSizeForRenderingSize:(struct CGSize { double x0; double x1; })a0 renderLevel:(int)a1 renderType:(unsigned int)a2;
- (id)cacheDatabase;
- (unsigned long long)cacheIndex;
- (unsigned long long)cacheIndexValidateIfNeeded:(BOOL)a0;
- (BOOL)canDisplayInlinePreview;
- (id)dataSourceImageRepresentationType;
- (id)dataSourcePath;
- (id)dataSourceURL;
- (BOOL)datasourceIsParsed;
- (void)datasourceItemDidChange;
- (void)didRecoverImageFromCache;
- (void)imageDidChange;
- (id)imageWrapperForType:(id)a0 representation:(id)a1;
- (unsigned long long)indexOfRepresentedItem;
- (id)initWithConcreteInstance:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlinePreviewFrameForImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)inlinePreviewQuickLookProperties;
- (BOOL)isAnIcon;
- (int)lastRenderedSize;
- (void)parentWillDie:(id)a0;
- (void)setContentCanBePlayed:(BOOL)a0;
- (void)setDataSourceIndex:(unsigned long long)a0;
- (void)setLastRenderedSize:(int)a0;
- (void)setSourceUID:(id)a0;
- (BOOL)shareIconIfPossible:(id)a0;
- (id)sourceUID;
- (void)validateDatasource;

@end

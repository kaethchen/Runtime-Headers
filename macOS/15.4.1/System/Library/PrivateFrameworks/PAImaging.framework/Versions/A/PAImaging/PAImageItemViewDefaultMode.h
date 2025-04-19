@class NSString, PAImageType, PAMultiLevelImage;

@interface PAImageItemViewDefaultMode : PAImageItemViewMode {
    NSString *_targetKey;
    BOOL _isTransitioningFromOtherMode;
    PAMultiLevelImage *_lastValidImage;
    BOOL _allAssetClientsMarkedReady;
}

@property (retain) PAImageType *imageType;

+ (id)defaultMode;
+ (id)defaultModeForImageType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToMode:(id)a0;
- (id)newAssetClientForKey:(id)a0 assetType:(id)a1;
- (void)activateWithView:(id)a0;
- (void)deactivateWithView:(id)a0;
- (BOOL)didLoadImage:(id)a0 forKey:(id)a1 client:(id)a2 isCurrent:(BOOL)a3;
- (void)didUpdateAssetClientsForLoad:(id)a0;
- (id)imageAssetTypeForKey:(id)a0;
- (id)initWithImageType:(id)a0;
- (void)loadWithConfiguration:(id)a0 display:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
- (BOOL)requiresAssetClientForKey:(id)a0;
- (void)updateImageView:(id)a0 withImage:(id)a1 forKey:(id)a2;
- (BOOL)willLoadPreviewImage;

@end

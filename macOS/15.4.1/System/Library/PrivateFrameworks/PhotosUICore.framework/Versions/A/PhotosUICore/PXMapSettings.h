@interface PXMapSettings : PXSettings

@property (nonatomic) BOOL enableCuratedPlacesAlbumSnapshot;

+ (id)sharedInstance;

- (void)setDefaultValues;
- (id)parentSettings;

@end

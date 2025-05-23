@class NSString;

@interface MPPlaceholderAVItem : MPAVItem <NSCopying>

@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) double durationFromExternalMetadata;
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (nonatomic, getter=isLikedStateEnabled) BOOL likedStateEnabled;
@property (retain, nonatomic) NSString *mainTitle;
@property (nonatomic) BOOL supportsLikedState;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (nonatomic) long long storeItemInt64ID;

+ (BOOL)isPlaceholder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isValidPlayerSubstituteForItem:(id)a0;
- (void)loadAssetAndPlayerItemWithTask:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsRateChange;

@end

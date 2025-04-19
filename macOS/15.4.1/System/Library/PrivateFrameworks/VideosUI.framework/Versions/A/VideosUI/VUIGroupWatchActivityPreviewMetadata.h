@class NSString, NSNumber, NSURL;

@interface VUIGroupWatchActivityPreviewMetadata : NSObject

@property (copy, nonatomic) NSString *seasonTitle;
@property (retain, nonatomic) NSNumber *seasonNumber;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *imageUrlFormat;
@property (readonly, nonatomic) BOOL allowsSceneAssociation;
@property (readonly, nonatomic) struct CGImage { } *artworkImage;
@property (readonly, copy, nonatomic) NSURL *fallbackUrl;

+ (struct CGImage { } *)_dataToImage:(id)a0;
+ (id)metadataFromSerializedData:(id)a0;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (id)_imageToData:(struct CGImage { } *)a0;
- (id)initWithMediaItem:(id)a0 fallbackUrl:(id)a1;
- (id)initWithPlayable:(id)a0 fallbackUrl:(id)a1;
- (id)initWithTitle:(id)a0 showTitle:(id)a1 seasonTitle:(id)a2 seasonNumber:(id)a3 episodeNumber:(id)a4 imageUrlFormat:(id)a5 artworkImage:(struct CGImage { } *)a6 fallbackUrl:(id)a7 isTVShow:(BOOL)a8 allowsSceneAssociation:(BOOL)a9;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 imageUrlFormat:(id)a2 artworkImage:(struct CGImage { } *)a3 fallbackUrl:(id)a4 allowsSceneAssociation:(BOOL)a5;
- (id)localizedSubtitleForSeasonNumber:(id)a0 episodeNumber:(id)a1;
- (id)serializedDataWithSeasonTitlesEnabled:(BOOL)a0;
- (id)subtitleWithSeasonTitlesEnabled:(BOOL)a0;

@end

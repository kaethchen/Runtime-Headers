@class NSString, NSDictionary, NSDate, FCHeadlineThumbnailMetadata;

@interface FCRecipeMetadata : NSObject <FCRecipeMetadataType>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) NSString *sourceChannelTagID;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) BOOL isPaid;
@property (readonly, nonatomic) NSString *thumbnailAccentColor;
@property (readonly, nonatomic) NSString *thumbnailBackgroundColor;
@property (readonly, nonatomic) NSString *thumbnailPrimaryColor;
@property (readonly, nonatomic) NSString *thumbnailTextColor;
@property (readonly, nonatomic) long long thumbnailFocalFrame;
@property (readonly, nonatomic) NSString *thumbnailSmall;
@property (readonly, nonatomic) long long thumbnailSmallMetadata;
@property (readonly, nonatomic) NSString *thumbnailMedium;
@property (readonly, nonatomic) long long thumbnailMediumMetadata;
@property (readonly, nonatomic) NSString *thumbnailLarge;
@property (readonly, nonatomic) long long thumbnailLargeMetadata;
@property (readonly, nonatomic) NSString *thumbnailExtraLarge;
@property (readonly, nonatomic) long long thumbnailExtraLargeMetadata;
@property (readonly, nonatomic) FCHeadlineThumbnailMetadata *formatThumbnail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 identifier:(id)a1;

@end

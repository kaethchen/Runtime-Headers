@class NSString, NSArray, IMPodcastFeedChannelItem, NSOrderedSet, NSMutableArray;

@interface IMPodcastFeed : NSObject <MTFeedPodcast>

@property (nonatomic) BOOL preferredCategoryFound;
@property (retain, nonatomic) NSString *feedDescription;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *globalImageURL;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *provider;
@property (retain, nonatomic) NSString *updatedFeedURL;
@property (retain, nonatomic) NSString *resolvedFeedURL;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL isNotSubscribable;
@property (retain, nonatomic) NSString *shareURL;
@property (retain, nonatomic) NSString *showType;
@property (retain, nonatomic) NSString *webpageURL;
@property (retain, nonatomic) NSString *podcastStoreId;
@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSArray *offers;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (retain, nonatomic) NSString *uberArtworkTextPrimaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextSecondaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextTertiaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextQuaternaryColor;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *artworkTemplateURL;
@property (retain, nonatomic) NSString *artworkPrimaryColor;
@property (retain, nonatomic) NSString *artworkTextPrimaryColor;
@property (retain, nonatomic) NSString *artworkTextSecondaryColor;
@property (retain, nonatomic) NSString *artworkTextTertiaryColor;
@property (retain, nonatomic) NSString *artworkTextQuaternaryColor;
@property (retain, nonatomic) IMPodcastFeedChannelItem *channelItem;
@property (retain, nonatomic) NSOrderedSet *categories;
@property (retain, nonatomic) NSString *showSpecificUpsellCopy;
@property (readonly, nonatomic) BOOL hasEpisodes;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)offerTypesAsFlagBits;

@end

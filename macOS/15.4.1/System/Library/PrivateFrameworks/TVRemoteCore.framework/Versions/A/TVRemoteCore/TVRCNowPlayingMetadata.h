@class NSString, NSURL, NSDate, NSNumber, TVRCRottenTomatoesReview;

@interface TVRCNowPlayingMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *canonicalID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSString *episodeTitle;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSString *showID;
@property (retain, nonatomic) NSNumber *seasonNumber;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (retain, nonatomic) NSString *ratingDescription;
@property (retain, nonatomic) NSString *extendedDescription;
@property (retain, nonatomic) NSString *iTunesStoreIdentifier;
@property (retain, nonatomic) NSURL *productPageURL;
@property (retain, nonatomic) NSURL *showProductPageURL;
@property (retain, nonatomic) NSNumber *mainContentStartTime;
@property (retain, nonatomic) NSString *programID;
@property (retain, nonatomic) NSNumber *timeOffset;
@property (retain, nonatomic) NSString *audioLanguage;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSString *currentlyPlayingSongID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSDate *releaseDate;
@property (nonatomic) BOOL isAppleOriginal;
@property (nonatomic) unsigned long long kind;
@property (retain, nonatomic) TVRCRottenTomatoesReview *rottenTomatoesReview;
@property (retain, nonatomic) NSString *imageURLTemplate;
@property (readonly, nonatomic) BOOL isMissingCriticalMetadata;
@property (readonly, nonatomic) BOOL isPlayingOnTVApp;

+ (id)currentAudioLanguageOptionFromContentItem:(id)a0;
+ (id)metadataFromContentItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToNowPlayingMetadata:(id)a0;

@end

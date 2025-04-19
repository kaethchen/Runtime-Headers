@class NSString, NSArray, NSURL, NSDate, NSNumber, TVRCRottenTomatoesReview;

@interface TVRCMediaInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long kind;
@property (retain, nonatomic) NSString *extendedDescription;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSString *imageURLTemplate;
@property (retain, nonatomic) NSString *ratingDescription;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSString *showTitle;
@property (retain, nonatomic) NSNumber *seasonNumber;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (retain, nonatomic) NSURL *productURL;
@property (retain, nonatomic) NSURL *showURL;
@property (retain, nonatomic) NSString *showIdentifier;
@property (nonatomic) BOOL isAppleOriginal;
@property (retain, nonatomic) NSArray *roles;
@property (retain, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) TVRCRottenTomatoesReview *rottenTomatoesReview;
@property (retain, nonatomic) NSArray *roleCategories;

+ (id)imageTemplateFromDict:(id)a0;
+ (unsigned long long)kindForMediaType:(id)a0;
+ (id)mediaInfoWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToMediaInfo:(id)a0;

@end

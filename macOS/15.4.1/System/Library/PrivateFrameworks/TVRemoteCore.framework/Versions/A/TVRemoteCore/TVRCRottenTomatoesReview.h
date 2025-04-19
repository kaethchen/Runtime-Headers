@class NSNumber, NSString;

@interface TVRCRottenTomatoesReview : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *percentage;
@property (retain, nonatomic) NSNumber *audienceScore;
@property (retain, nonatomic) NSNumber *averageRating;
@property (retain, nonatomic) NSString *consensus;
@property (retain, nonatomic) NSNumber *numberOfFreshReviews;
@property (retain, nonatomic) NSNumber *numberOfRottenReviews;
@property (retain, nonatomic) NSString *freshness;
@property (readonly, nonatomic) unsigned long long freshnessLevel;

+ (id)rottenTomatoesReviewWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRottenTomatoesReview:(id)a0;

@end

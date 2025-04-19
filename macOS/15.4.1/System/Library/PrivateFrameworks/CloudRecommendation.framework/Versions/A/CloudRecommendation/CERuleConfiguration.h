@class NSArray, NSDictionary, NSURL, NSNumber;

@interface CERuleConfiguration : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *thresholds;
@property (retain, nonatomic) NSURL *displayURL;
@property (retain, nonatomic) NSURL *dismissURL;
@property (retain, nonatomic) NSURL *completedURL;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) NSNumber *maxRecommendationsToShow;
@property (readonly, nonatomic) NSArray *ruleset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)thresholdForKey:(id)a0;

@end

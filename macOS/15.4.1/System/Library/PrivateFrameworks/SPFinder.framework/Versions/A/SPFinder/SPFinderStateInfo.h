@class NSArray, NSSet, NSDate;

@interface SPFinderStateInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL state;
@property (nonatomic) BOOL optInScreenOffScan;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSDate *lastPublishDate;
@property (copy, nonatomic) NSDate *lastScheduledPublishActivityDate;
@property (nonatomic) long long activeCache;
@property (retain, nonatomic) NSArray *disabledReasonsArray;
@property (readonly, copy, nonatomic) NSSet *disabledReasons;

+ (BOOL)canPublishAnonymously;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(BOOL)a0 optInScreenOffScan:(BOOL)a1 lastUpdated:(id)a2 lastPublishDate:(id)a3 lastScheduledPublishActivityDate:(id)a4 activeCache:(long long)a5 disabledReasons:(id)a6;

@end

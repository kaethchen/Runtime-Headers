@interface SiriAnalytics.StagingReport : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ addedCount;
@property (nonatomic) void /* unknown type, empty encoding */ missingTimestampCount;
@property (nonatomic) void /* unknown type, empty encoding */ result;

+ (id)timedOut;
+ (id)failed;
+ (id)terminated;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(int)a0;
- (void)added;
- (void)missingTimestamp;

@end

@interface BDSReadingHistoryDayInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long readingTime;
@property (nonatomic) long long goal;
@property (nonatomic) BOOL isStreakDay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReadingTime:(long long)a0 goal:(long long)a1 isStreakDay:(BOOL)a2;

@end

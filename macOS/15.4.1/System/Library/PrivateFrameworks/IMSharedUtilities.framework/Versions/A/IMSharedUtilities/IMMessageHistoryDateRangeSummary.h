@class NSArray, NSDateInterval;

@interface IMMessageHistoryDateRangeSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *messages;
@property (readonly, nonatomic) long long totalMessagePartCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 messages:(id)a1;
- (id)messagesMatchingDateInterval:(id)a0;

@end

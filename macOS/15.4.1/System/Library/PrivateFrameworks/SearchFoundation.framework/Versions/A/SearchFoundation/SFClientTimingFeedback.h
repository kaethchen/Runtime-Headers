@class NSString;

@interface SFClientTimingFeedback : SFFeedback

@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *eventName;
@property unsigned long long nanosecondInterval;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(id)a0 timeInterval:(unsigned long long)a1 queryId:(unsigned long long)a2;

@end

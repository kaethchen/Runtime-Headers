@class NSArray;

@interface AFDismissTimerRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *timerURLs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;

@end

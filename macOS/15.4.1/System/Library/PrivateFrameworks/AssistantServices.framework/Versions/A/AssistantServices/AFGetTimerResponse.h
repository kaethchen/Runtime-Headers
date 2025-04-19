@class STTimer;

@interface AFGetTimerResponse : AFSiriResponse

@property (retain, nonatomic) STTimer *timer;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

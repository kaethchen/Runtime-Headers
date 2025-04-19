@class NSDictionary;

@interface CHRemotePowerLoggingInferenceRequest : CHRemotePowerLoggingRequest

@property (nonatomic) double start;
@property (nonatomic) double end;
@property (copy, nonatomic) NSDictionary *data;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModel:(unsigned long long)a0 startTime:(double)a1 endTime:(double)a2 data:(id)a3;

@end

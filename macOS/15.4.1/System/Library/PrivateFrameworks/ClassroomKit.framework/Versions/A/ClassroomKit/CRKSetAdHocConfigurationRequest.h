@class NSDictionary;

@interface CRKSetAdHocConfigurationRequest : CATTaskRequest

@property (copy, nonatomic) NSDictionary *configuration;
@property (nonatomic) BOOL merge;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSource;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

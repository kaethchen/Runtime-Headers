@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *configurationsByType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

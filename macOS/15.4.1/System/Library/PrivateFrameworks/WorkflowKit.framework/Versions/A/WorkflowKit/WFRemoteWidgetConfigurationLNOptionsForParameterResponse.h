@class LNDynamicOptionsResult;

@interface WFRemoteWidgetConfigurationLNOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNDynamicOptionsResult *result;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0 error:(id)a1;

@end

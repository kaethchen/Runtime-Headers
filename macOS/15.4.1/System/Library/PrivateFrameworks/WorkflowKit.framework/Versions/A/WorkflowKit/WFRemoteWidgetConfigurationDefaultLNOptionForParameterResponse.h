@class LNDynamicOption;

@interface WFRemoteWidgetConfigurationDefaultLNOptionForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNDynamicOption *defaultOption;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultOption:(id)a0 error:(id)a1;

@end

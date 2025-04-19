@protocol NSSecureCoding;

@interface WFRemoteWidgetConfigurationDefaultValueForParameterResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) id<NSSecureCoding> defaultValue;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultValue:(id)a0 error:(id)a1;

@end

@class LNActionMetadata;

@interface WFRemoteWidgetConfigurationLNActionMetadataResponse : WFRemoteWidgetConfigurationResponse

@property (readonly, nonatomic) LNActionMetadata *metadata;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetadata:(id)a0 error:(id)a1;

@end

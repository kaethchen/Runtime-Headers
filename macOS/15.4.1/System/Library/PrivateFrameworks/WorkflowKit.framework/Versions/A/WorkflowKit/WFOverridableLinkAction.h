@class NSString, NSDictionary;

@interface WFOverridableLinkAction : WFLinkAction

@property (class, readonly, nonatomic) NSString *overrideInputParameterName;

@property (readonly, nonatomic) BOOL shouldOverrideParameterLabels;
@property (readonly, nonatomic) BOOL shouldOverrideSubcategory;
@property (readonly, nonatomic) NSString *overrideDescriptionSummary;
@property (readonly, nonatomic) NSDictionary *overrideLabelsByParameter;
@property (readonly, nonatomic) NSDictionary *overrideDefaultValuesByParameter;
@property (readonly, nonatomic) NSDictionary *serializationKeysByParameter;
@property (readonly, nonatomic) NSDictionary *parameterOverrides;
@property (readonly, nonatomic) NSString *appName;

+ (id)inputParameterMetadataWithActionMetadata:(id)a0;
+ (id)overrideInputParameterNames;

- (void).cxx_destruct;
- (id)parameterDefinitions;
- (BOOL)isPlatformProvidedUnderstandingAction;

@end

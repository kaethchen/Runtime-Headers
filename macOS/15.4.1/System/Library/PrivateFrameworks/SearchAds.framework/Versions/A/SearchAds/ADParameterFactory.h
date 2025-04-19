@class ADCapService;

@interface ADParameterFactory : NSObject

@property (retain, nonatomic) ADCapService *capService;

- (id)init;
- (void).cxx_destruct;
- (id)campaignNamespaceParameterWithCampaignNamespace:(id)a0;
- (id)frequencyCapDataParameter;
- (id)privacyDataKeyParameter;
- (id)requestedAdDataParameter;
- (id)requestedTemplateTypeParameter;
- (id)toroClickCountDataParameter;

@end

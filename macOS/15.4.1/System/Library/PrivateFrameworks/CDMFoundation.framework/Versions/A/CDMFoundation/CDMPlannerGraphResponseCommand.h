@class SIRINLUEXTERNALCDM_PLANNERCdmPlannerResponse;

@interface CDMPlannerGraphResponseCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUEXTERNALCDM_PLANNERCdmPlannerResponse *plannerResponse;

+ (id)serviceGraphName;
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;

- (void).cxx_destruct;
- (id)initWithPlannerResponse:(id)a0;

@end

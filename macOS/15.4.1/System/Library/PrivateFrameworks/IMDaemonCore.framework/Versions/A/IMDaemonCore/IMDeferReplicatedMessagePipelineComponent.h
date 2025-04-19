@class NSString;

@interface IMDeferReplicatedMessagePipelineComponent : IMPipelineComponent

@property (nonatomic) BOOL skipDeferral;
@property (retain, nonatomic) NSString *replicationSourceServiceNameOverride;

- (void).cxx_destruct;
- (id)_runIndividuallyWithInput:(id)a0;
- (BOOL)_shouldDeferDeliveryWithInput:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end

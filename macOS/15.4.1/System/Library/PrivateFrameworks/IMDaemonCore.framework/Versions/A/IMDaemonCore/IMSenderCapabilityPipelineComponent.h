@class NSSet, NSData;

@interface IMSenderCapabilityPipelineComponent : IMPipelineComponent

@property (retain, nonatomic) NSSet *registrationProperties;
@property (retain, nonatomic) NSData *pushToken;

- (void).cxx_destruct;
- (id)initWithRegistrationProperties:(id)a0 pushToken:(id)a1;
- (id)runIndividuallyWithInput:(id)a0;

@end

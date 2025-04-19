@class NSString, BlastDoorRelayGroupDisplayNameMutationEnvelope, BlastDoorRelayGroupParticipantMutationEnvelope;

@interface BlastDoorRelayGroupMutationWrapper : NSObject {
    void /* unknown type, empty encoding */ relayGroupMutation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorRelayGroupDisplayNameMutationEnvelope *displayName;
@property (nonatomic, readonly) BlastDoorRelayGroupParticipantMutationEnvelope *participant;

- (id)init;
- (void).cxx_destruct;

@end

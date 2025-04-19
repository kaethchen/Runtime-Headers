@class NSString, NSArray;

@interface BlastDoorRelayGroupParticipantMutationEnvelope : NSObject {
    void /* unknown type, empty encoding */ relayGroupParticipantMutationEnvelope;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *changedParticipants;

- (id)init;
- (void).cxx_destruct;

@end

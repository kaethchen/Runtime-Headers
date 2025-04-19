@class NSString, BlastDoorGroupDisplayName;

@interface BlastDoorRelayGroupDisplayNameMutationEnvelope : NSObject {
    void /* unknown type, empty encoding */ relayGroupDisplayNameMutationEnvelope;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorGroupDisplayName *updatedName;

- (id)init;
- (void).cxx_destruct;

@end

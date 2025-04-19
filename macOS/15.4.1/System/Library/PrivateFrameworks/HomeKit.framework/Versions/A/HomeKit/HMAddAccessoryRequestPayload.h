@class NSString, NSUUID, HMSetupAccessoryDescription;

@interface HMAddAccessoryRequestPayload : NSObject <HMFMessagePrototypeRequestPayload> {
    void /* unknown type, empty encoding */ payload;
}

@property (nonatomic, readonly) NSString *messageName;
@property (nonatomic, copy) NSUUID *accessoryUUID;
@property (nonatomic, copy) NSUUID *accessoryPeerIdentifier;
@property (nonatomic, copy) NSString *accessoryPairingPassword;
@property (nonatomic, retain) HMSetupAccessoryDescription *accessoryDescription;
@property (nonatomic) BOOL setupCodeDeferred;
@property (nonatomic) BOOL shouldRetrySetup;

- (id)init;
- (void).cxx_destruct;
- (id)makeMessagePayloadWithError:(id *)a0;

@end

@class NSString, NSUUID, BlastDoorRelayGroupMutationWrapper, BlastDoorGroupID;

@interface BlastDoorRelayGroupMutationMessage : NSObject {
    void /* unknown type, empty encoding */ relayGroupMutationMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) BlastDoorGroupID *groupID;
@property (nonatomic, readonly) BlastDoorGroupID *originalGroupID;
@property (nonatomic, readonly) NSUUID *guid;
@property (nonatomic, readonly) NSString *destinationCallerID;
@property (nonatomic, readonly) BOOL fromMe;
@property (nonatomic, readonly) BlastDoorRelayGroupMutationWrapper *mutation;

- (id)init;
- (void).cxx_destruct;

@end

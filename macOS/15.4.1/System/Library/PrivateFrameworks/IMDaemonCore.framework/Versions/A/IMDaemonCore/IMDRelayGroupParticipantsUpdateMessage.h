@class NSDictionary;

@interface IMDRelayGroupParticipantsUpdateMessage : IMDRelayGroupMutationMessage

@property (nonatomic) unsigned long long participantChangeType;
@property (copy, nonatomic) NSDictionary *changedParticipants;

- (void).cxx_destruct;
- (id)createDictionary;
- (id)_initWithBlastDoorMessage:(id)a0;
- (id)initWithChangeType:(unsigned long long)a0 changedParticipants:(id)a1 sender:(id)a2 service:(id)a3 groupID:(id)a4 originalGroupID:(id)a5 guid:(id)a6 destinationCallerID:(id)a7 failed:(BOOL)a8 fromMe:(BOOL)a9;

@end

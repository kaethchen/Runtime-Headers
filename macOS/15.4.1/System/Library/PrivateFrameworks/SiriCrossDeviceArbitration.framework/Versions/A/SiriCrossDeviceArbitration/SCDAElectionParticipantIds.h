@class NSUUID;

@interface SCDAElectionParticipantIds : NSObject

@property (readonly) NSUUID *electionParticipantId;
@property (readonly) NSUUID *rotatedElectionParticipantId;

- (void).cxx_destruct;
- (id)init:(id)a0 rotatedElectionParticipantId:(id)a1;

@end

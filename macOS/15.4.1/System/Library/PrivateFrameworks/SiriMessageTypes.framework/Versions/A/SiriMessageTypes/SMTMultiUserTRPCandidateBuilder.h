@class NSString, NSArray;

@interface SMTMultiUserTRPCandidateBuilder : NSObject

@property (copy, nonatomic) NSString *multiUserTrpCandidateId;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSArray *trpCandidateList;

- (id)init;
- (void).cxx_destruct;
- (id)initBuilderWithTrpCandidateId:(id)a0 requestId:(id)a1 trpCandidateList:(id)a2;
- (id)initBuilderWithTrpCandidateId:(id)a0 trpCandidateList:(id)a1;

@end

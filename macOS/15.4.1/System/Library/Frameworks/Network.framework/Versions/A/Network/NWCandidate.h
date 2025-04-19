@class NSObject, NWConcrete_nw_candidate_manager;
@protocol OS_nw_interface_option_details, OS_nw_path, OS_nw_path_evaluator;

@interface NWCandidate : NSObject {
    NWConcrete_nw_candidate_manager *manager;
    NSObject<OS_nw_interface_option_details> *details;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_path> *current_path;
    unsigned char original : 1;
    unsigned char ids : 1;
    unsigned char evaluating : 1;
    unsigned char submitted : 1;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)handleNewPath:(id)a0;
- (id)initCandidate:(id)a0 forManager:(id)a1 evaluator:(id)a2;
- (BOOL)isEligible;
- (void)startEvaluator;

@end

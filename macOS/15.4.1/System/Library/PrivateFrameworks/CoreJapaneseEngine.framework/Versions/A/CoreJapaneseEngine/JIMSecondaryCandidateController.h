@class NSArray, NSViewController, NSString, IMKCandidates;

@interface JIMSecondaryCandidateController : NSObject <IMKCandidatesDelegate>

@property (retain, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSViewController *viewController;
@property (readonly, nonatomic) IMKCandidates *candidateController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSecondaryCandidateController;

- (id)init;
- (void).cxx_destruct;
- (void)didFinishInteracting:(id)a0;
- (void)candidateSelected:(id)a0 candidateController:(id)a1;
- (void)candidateSelectionChanged:(id)a0 candidateController:(id)a1;
- (void)didHideCandidates:(id)a0;
- (void)didSelectSortingMode:(id)a0 candidateController:(id)a1;
- (void)didShowCandidates:(id)a0;
- (void)didUpdateCandidates:(id)a0;
- (unsigned long long)firstVisibleLineForCandidateController:(id)a0;
- (id)selectedCandidateForProposedCandidate:(id)a0 candidateController:(id)a1;
- (void)selectSecondaryCandidateAt:(long long)a0;
- (void)setCandidates:(id)a0 client:(id)a1 evenWidthCells:(BOOL)a2;

@end

@class IMKUITriCandidateLayout, NSArray, IMKCandidate;

@interface IMKUICandidateLayout : NSObject

@property (readonly) IMKCandidate *leftCandidate;
@property (readonly) IMKCandidate *middleCandidate;
@property (readonly) IMKUITriCandidateLayout *rightSet;
@property (readonly) BOOL middleIsCorrection;
@property (readonly) NSArray *candidates;

+ (id)candidateSetFrom:(id)a0;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)candidateAtIndex:(unsigned long long)a0;
- (id)initWithLeftCandidate:(id)a0 middleCandidate:(id)a1 rightCandidate:(id)a2;
- (id)initWithLeftCandidate:(id)a0 middleCandidate:(id)a1 rightSet:(id)a2;
- (id)initWithLeftCandidate:(id)a0 middleCandidate:(id)a1 thatIsCorrection:(BOOL)a2 rightSet:(id)a3;

@end

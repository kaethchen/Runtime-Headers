@class NSArray;

@interface IMKCandidateList : NSObject

@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) BOOL hasCandidate;

+ (id)candidateListWithCandidates:(id)a0;
+ (id)candidateListWithTextFrom:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCandidates:(id)a0;
- (id)initWithTextFrom:(id)a0;

@end

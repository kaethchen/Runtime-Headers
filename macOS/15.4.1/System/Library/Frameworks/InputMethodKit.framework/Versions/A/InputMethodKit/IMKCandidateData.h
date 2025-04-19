@class NSArray, NSMutableDictionary;

@interface IMKCandidateData : NSObject {
    NSArray *_candidates;
}

@property (retain, nonatomic) NSMutableDictionary *keysToCandidates;
@property (retain, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *candidates;
@property (nonatomic) BOOL shouldShowGroups;
@property (readonly, nonatomic) BOOL hasGroups;
@property (readonly, nonatomic) BOOL isShowingEmptyCandidate;

+ (id)candidateDataWithArray:(id)a0;

- (void)dealloc;
- (unsigned long long)keyCount;
- (unsigned long long)candidateCount;
- (id)candidatesForKey:(id)a0;
- (unsigned long long)positionOfCandidateForKey:(id)a0;
- (void)setCandidates:(id)a0 forKey:(id)a1;

@end

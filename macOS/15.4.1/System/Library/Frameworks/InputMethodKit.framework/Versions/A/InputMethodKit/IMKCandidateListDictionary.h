@class NSDictionary, NSArray, IMKCandidate;

@interface IMKCandidateListDictionary : NSObject {
    unsigned long long _candidateCount;
}

@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSArray *allCandidates;
@property (readonly, nonatomic) IMKCandidate *firstCandidate;
@property (readonly, nonatomic) IMKCandidate *lastCandidate;
@property (readonly, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)listDictionaryWithKeys:(id)a0 array:(id)a1;
+ (id)listDictionaryWithList:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)candidateListForKey:(id)a0;
- (id)initWithKeys:(id)a0 array:(id)a1;
- (id)initialCandidates;

@end

@class NSString, NSArray;

@interface CIMCandidateSorter : NSObject

@property (retain) NSString *inputModeName;
@property unsigned long long scriptType;
@property (retain) NSArray *storedCandidates;

+ (id)candidateSorterForScriptType:(unsigned long long)a0 inputModeName:(id)a1;

- (void).cxx_destruct;
- (void)setCandidates:(id)a0;
- (id)IMKCandidateArrayFromDictionary:(id)a0 sortedKeys:(id)a1;
- (id)wordPropertyDictionaryForArray:(id)a0;
- (void)addCharacter:(id)a0 groupLabel:(id)a1 dictionary:(id)a2 isSecondary:(BOOL)a3;
- (id)candidatesSortedByMethod:(id)a0;
- (id)candidatesSortedByPinyinOrZhuyin:(id)a0 simplified:(BOOL)a1 zhuyin:(BOOL)a2;
- (id)candidatesSortedByRadical:(id)a0;
- (id)candidatesSortedByStroke:(id)a0;
- (id)initWithScriptType:(unsigned long long)a0 inputModeName:(id)a1;
- (void)sortCharactersByStrokeCount:(id)a0 wordPropertiesDictionary:(id)a1;

@end

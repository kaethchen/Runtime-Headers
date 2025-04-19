@class TIKeyboardCandidateResultSet, TIAutocorrectionList;

@interface _TUIKeyboardCandidateContainer : NSObject

@property (nonatomic) long long *candidateSourceType;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;

+ (id)forSourceType:(long long)a0;
+ (id)forSourceType:(long long)a0 withAutocorrectionList:(id)a1;
+ (id)forSourceType:(long long)a0 withKeyboardCandidateResultSet:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasCandidates;

@end

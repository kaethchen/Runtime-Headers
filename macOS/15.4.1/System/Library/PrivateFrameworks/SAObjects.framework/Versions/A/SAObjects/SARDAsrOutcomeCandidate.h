@interface SARDAsrOutcomeCandidate : SASResultCandidate

+ (id)asrOutcomeCandidate;
+ (id)asrOutcomeCandidateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end

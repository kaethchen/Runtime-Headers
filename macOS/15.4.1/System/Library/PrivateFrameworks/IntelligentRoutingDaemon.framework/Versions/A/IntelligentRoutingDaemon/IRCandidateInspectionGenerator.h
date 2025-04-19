@class NSDictionary, NSString, IRCandidate;

@interface IRCandidateInspectionGenerator : NSObject

@property (nonatomic) BOOL sameSpaceBasedOnMiLo;
@property (nonatomic) BOOL sameSpaceBasedOnBrokeredLOI;
@property (nonatomic) BOOL sameSpaceBasedOnUWB;
@property (nonatomic) BOOL sameSpaceBasedOnBLE;
@property (nonatomic) BOOL sameSpaceBasedOnPDRFence;
@property (nonatomic) BOOL sameSpaceBasedOnHistory;
@property (readonly, nonatomic) NSDictionary *candidateSelectorReasons;
@property (readonly, nonatomic) IRCandidate *candidate;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) NSString *classificationDescription;

- (void).cxx_destruct;
- (id)exportCandidateInspectionAsDictionary;
- (id)initClassification:(long long)a0 andClassificationDescription:(id)a1 forCandidate:(id)a2;
- (id)initWithClassification:(long long)a0 ClassificationDescription:(id)a1 sameSpaceBasedOnMiLo:(BOOL)a2 sameSpaceBasedOnBrokeredLOI:(BOOL)a3 sameSpaceBasedOnPDRFence:(BOOL)a4 sameSpaceBasedOnUWB:(BOOL)a5 sameSpaceBasedOnBLE:(BOOL)a6 sameSpaceBasedOnHistory:(BOOL)a7 candidateSelectorReasons:(id)a8 forCandidate:(id)a9;

@end

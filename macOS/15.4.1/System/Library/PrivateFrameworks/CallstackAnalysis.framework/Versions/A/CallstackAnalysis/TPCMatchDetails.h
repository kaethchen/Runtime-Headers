@class NSString, NSMutableArray;

@interface TPCMatchDetails : NSObject

@property (nonatomic) unsigned long long signaturesWithCommonAPIBoundaries;
@property (nonatomic) unsigned long long signaturesWithAllCommonAPIBoundaries;
@property (nonatomic) unsigned long long signaturesWithCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithAllCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithCommonLastContiguousAPIBoundaries;
@property (nonatomic) unsigned long long signaturesWithCommonLastContiguous3PFrames;
@property (nonatomic) unsigned long long signaturesWithCommonLast3PFrames;
@property (nonatomic) unsigned long long signaturesWithTriggerFrames;
@property (nonatomic) unsigned long long signaturesWithTriggerFrameAndCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithTriggerFrameAndCommonLast3PFrames;
@property (nonatomic) unsigned long long signaturesWithDirectWalCheckpointInvocationAndCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithDirectWalCheckpointInvocationAndCommonLast3PFrame;
@property (nonatomic) unsigned long long signaturesWithDirectWalCheckpointInvocationAndSimilarLast3PRegions;
@property (nonatomic) unsigned long long signaturesWithSimilarLast3PRegions;
@property (nonatomic) unsigned long long signaturesWithTriggerFrameAndSimilarLast3PRegions;
@property (nonatomic) unsigned long long signaturesWithInsightAndCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithInsightAndCommonLast3PFrames;
@property (nonatomic) unsigned long long signaturesWithInsightAndSimilarLast3PRegions;
@property (nonatomic) unsigned long long signaturesWithTriggerFrameInsightAndCommon3PFrames;
@property (nonatomic) unsigned long long signaturesWithTriggerFrameInsightAndCommonLast3PFrames;
@property (nonatomic) unsigned long long signaturesWithTriggerFrameInsightAndSimilarLast3PRegions;
@property (nonatomic) long long matchStartOffsetFromLast3PFrame;
@property (nonatomic) BOOL validMatchResult;
@property (nonatomic) BOOL isMatch;
@property (nonatomic) BOOL isApproximateMatch;
@property (nonatomic) BOOL shouldSuppress;
@property (copy, nonatomic) NSString *fullMessage;
@property (copy, nonatomic) NSString *additionalDiagnosticText;
@property (copy, nonatomic) NSString *last3PFrame;
@property (copy, nonatomic) NSString *issueType;
@property (copy, nonatomic) NSString *antipatternTrigger;
@property (copy, nonatomic) NSString *insightDescriptionForSignaturesWithCommon3PFrames;
@property (copy, nonatomic) NSString *insightDescriptionForSignaturesWithTriggerFrameAndCommon3PFrames;
@property (copy, nonatomic) NSString *insightDescriptionForSignaturesWithCommonLast3PFrames;
@property (copy, nonatomic) NSString *insightDescriptionForSignaturesWithTriggerFrameAndCommonLast3PFrames;
@property (copy, nonatomic) NSString *insightDescriptionForSignaturesWithSimilarLast3PRegion;
@property (copy, nonatomic) NSString *insightDescriptionForSignaturesWithTriggerFrameAndSimilarLast3PRegion;
@property (retain, nonatomic) NSMutableArray *signatureVersionsWithCommonLast3PFrames;
@property (retain, nonatomic) NSMutableArray *signatureVersionsWithTriggerFrameAndCommonLast3PFrames;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *helpURL;
@property (weak, nonatomic) NSMutableArray *recommendedMatchedSignatureMetaData;
@property (retain, nonatomic) NSMutableArray *matchedSignaturesWithCommon3PFramesMetaData;
@property (retain, nonatomic) NSMutableArray *matchedSignaturesWithCommonLast3PFramesMetaData;
@property (retain, nonatomic) NSMutableArray *matchedSignaturesWithSimilarLast3PRegion;

- (id)init;
- (void).cxx_destruct;

@end

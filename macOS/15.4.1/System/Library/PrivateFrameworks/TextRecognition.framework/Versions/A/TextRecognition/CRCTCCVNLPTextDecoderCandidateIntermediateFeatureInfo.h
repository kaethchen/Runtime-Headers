@class NSString, NSArray;

@interface CRCTCCVNLPTextDecoderCandidateIntermediateFeatureInfo : NSObject {
    double _prob;
    double _activationProb;
    NSString *_decodedString;
    NSArray *_ranges;
    NSArray *_tokenPermutation;
}

- (void).cxx_destruct;

@end

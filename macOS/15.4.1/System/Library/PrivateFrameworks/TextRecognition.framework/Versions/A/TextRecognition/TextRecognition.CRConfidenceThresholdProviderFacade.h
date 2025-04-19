@interface TextRecognition.CRConfidenceThresholdProviderFacade : NSObject <CRConfidenceThresholdProviding> {
    void /* unknown type, empty encoding */ thresholdsForTextRegionBlock;
}

- (id)init;
- (void).cxx_destruct;
- (id)thresholdsForTextRegion:(id)a0 withLocale:(id)a1;

@end

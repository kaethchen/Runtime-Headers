@class NSArray, NSDictionary;

@interface VNCoreSceneUnderstandingDetectorTaxonomy : NSObject {
    NSDictionary *_classificationMetricsForLabelDictionary;
}

@property (readonly, copy) NSArray *labels;

+ (id)taxonomyForCSUTaxonomy:(id)a0 vocabularyNames:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)labelsFilteredByDisallowedList:(id)a0;
- (id)_initWithLabels:(id)a0 classificationMetricsForLabelDictionary:(id)a1;
- (id)classificationMetricsForLabel:(id)a0;

@end

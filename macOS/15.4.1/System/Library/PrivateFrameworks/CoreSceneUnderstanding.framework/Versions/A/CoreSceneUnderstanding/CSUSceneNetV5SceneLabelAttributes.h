@class CSUMetricOperatingPointCurve, NSString, NSArray, CSUSceneNetV5SceneTaxonomyAttributes;

@interface CSUSceneNetV5SceneLabelAttributes : NSObject {
    CSUSceneNetV5SceneTaxonomyAttributes *_attributeManager;
}

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSArray *detectorClasses;
@property (readonly, copy, nonatomic) NSString *humanReadableLabel;
@property (readonly, copy, nonatomic) NSArray *humanReadableSynonyms;
@property (readonly, nonatomic, getter=isSearchable) BOOL searchable;
@property (readonly, nonatomic) float photosSearchThreshold;
@property (readonly, nonatomic) CSUMetricOperatingPointCurve *precisionOperatingPointCurve;
@property (readonly, nonatomic) CSUMetricOperatingPointCurve *recallOperatingPointCurve;
@property (readonly, nonatomic) CSUMetricOperatingPointCurve *betaFScoreMaximizingOperatingPointCurve;

- (void).cxx_destruct;
- (id)_metricOperatingPointCurveForAttribute:(id)a0 metricPattern:(int)a1;
- (id)initWithTaxonomyAttributes:(id)a0 forLabel:(id)a1;

@end

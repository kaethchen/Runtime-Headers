@class SSTokenizedString, NSMutableArray;

@interface MatchedPhotoAttribute : NSObject

@property (retain, nonatomic) SSTokenizedString *feature;
@property unsigned long long tokenNum;
@property unsigned long long tokenLength;
@property double confidence;
@property double boundingBox;
@property (retain, nonatomic) NSMutableArray *types;
@property (retain, nonatomic) NSMutableArray *totalFeaturesNum;

- (void).cxx_destruct;
- (id)initPhotoFeature:(id)a0 matchedType:(unsigned long long)a1 totalFeaturesNum:(id)a2 confidence:(double)a3 boundingBox:(double)a4;

@end

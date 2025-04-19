@class NSArray, MLModel, APOdmlFeatureHandler, APOdmlAssetManager;

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) MLModel *predictionModel;
@property (readonly, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) APOdmlFeatureHandler *featureHandler;
@property (readonly, nonatomic) NSArray *adamIDs;

- (void).cxx_destruct;

@end

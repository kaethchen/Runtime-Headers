@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CHGroupingModel : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_model;
    long long _modelUseCount;
    long long _inferenceCount;
}

@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) unsigned long long maxNumStrokes;
@property (readonly, nonatomic) unsigned long long maxNumPointsPerStroke;
@property (readonly, nonatomic) unsigned long long numOverlapStrokes;
@property (readonly, nonatomic) unsigned long long numBBoxFeaturesPerStroke;
@property (readonly, nonatomic) unsigned long long numSignalFeaturesPerPoint;
@property (readonly, nonatomic) unsigned long long recognitionTileHeight;
@property (readonly, nonatomic) unsigned long long tileOverlapHeight;
@property (readonly, nonatomic) NSArray *supportedConfigurationsNumStrokes;
@property (readonly, nonatomic) float interpolationDistance;
@property (readonly, nonatomic) float coordinateNormalizationFactor;
@property (readonly, nonatomic) long long contentType;

+ (void)setup;
+ (id)modelWithModelName:(id)a0 contentType:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)incrementUsageCount;
- (long long)usageCount;
- (long long)_closestConfigurationForInputStrokes:(long long)a0;
- (long long)_tileIndexForYPosition:(double)a0 tileHeight:(long long)a1;
- (void)createTilesForInputStrokes:(id)a0 subtileStartIndexes:(id *)a1 strokesForSubtile:(id *)a2;
- (void)decrementUsageCount;
- (id)extractBBoxFeaturesForDrawing:(id)a0 padTo:(long long)a1;
- (id)extractSignalFeaturesFromDrawing:(id)a0 padTo:(long long)a1;
- (id)extractSignalMaskFromDrawing:(id)a0 padTo:(long long)a1;
- (id)groupStrokes:(id)a0 previousAdjacencies:(const void *)a1 updatedAdjacencies:(void *)a2;
- (id)initWithModelName:(id)a0 model:(void *)a1 contentType:(long long)a2;
- (id)normalizedDrawing:(id)a0;
- (id)strokesSortedByMidY:(id)a0;

@end

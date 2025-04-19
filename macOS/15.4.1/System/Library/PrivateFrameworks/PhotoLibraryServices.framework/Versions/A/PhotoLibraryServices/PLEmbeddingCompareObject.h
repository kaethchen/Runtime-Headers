@class NSString, NSArray;

@interface PLEmbeddingCompareObject : NSObject

@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } llmTimeRange;
@property (readonly, nonatomic) NSArray *vector;
@property (readonly, nonatomic) double distanceBetweenVectors;
@property (nonatomic) unsigned long long modelType;

- (void).cxx_destruct;
- (double)distanceToQueryVector:(id)a0;
- (id)initWithAssetUUID:(id)a0 vector:(id)a1;

@end

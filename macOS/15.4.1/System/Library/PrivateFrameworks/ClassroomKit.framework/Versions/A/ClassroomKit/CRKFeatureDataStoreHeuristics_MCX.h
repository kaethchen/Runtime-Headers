@protocol CRKFeatureDataStoreProtocol;

@interface CRKFeatureDataStoreHeuristics_MCX : NSObject

@property (weak, nonatomic) id<CRKFeatureDataStoreProtocol> dataStore;

+ (id)overrideFeaturesByFeature;
+ (id)overrideIsForcedByFeature;

- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (unsigned long long)applyHeuristicsToFeature:(id)a0 boolType:(unsigned long long)a1;
- (BOOL)applyIsForcedHeuristicsToFeature:(id)a0 isForced:(BOOL)a1;

@end

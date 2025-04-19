@class NSArray, NSMutableDictionary;

@interface TMRulesEngineConstructionContext : NSObject {
    NSMutableDictionary *_sourceDiskMap;
    NSMutableDictionary *_filterGeneratorMap;
    NSMutableDictionary *_spotlightOracleMap;
}

@property (readonly) NSArray *sourceDisks;
@property (readonly) NSArray *spotlightOracles;
@property (readonly) NSArray *filterGenerators;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateRelatedConstructionMaterialsUsingBlock:(id /* block */)a0;
- (id)filterGeneratorCorrespondingToPath:(id)a0;
- (id)filterGeneratorForDevice:(int)a0;
- (id)filterGeneratorForMountPoint:(id)a0;
- (void)setFilterGenerator:(id)a0 forDevice:(int)a1;
- (void)setSourceDisk:(id)a0 forDevice:(int)a1;
- (void)setSpotlightOracle:(id)a0 forDevice:(int)a1;
- (id)sourceDiskForDevice:(int)a0;
- (id)spotlightOracleForDevice:(int)a0;

@end

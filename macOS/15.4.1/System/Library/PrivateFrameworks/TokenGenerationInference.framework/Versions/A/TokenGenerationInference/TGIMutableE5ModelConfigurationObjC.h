@class NSString, TGIE5BaseModelObjC;

@interface TGIMutableE5ModelConfigurationObjC : TGIE5ModelConfigurationObjC

@property (copy) NSString *serializeModelIOPath;
@property (retain) TGIE5BaseModelObjC *baseModel;
@property BOOL useModelCatalogE5CompilerCache;
@property BOOL useEnergyEfficientMode;
@property (copy) NSString *assetIdentifier;

@end

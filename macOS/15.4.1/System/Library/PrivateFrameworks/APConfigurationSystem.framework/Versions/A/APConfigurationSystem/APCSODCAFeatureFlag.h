@class NSNumber, NSDictionary;

@interface APCSODCAFeatureFlag : APConfiguration

@property (readonly, nonatomic) NSNumber *onDeviceAttributionEnabledPercentage;
@property (readonly, nonatomic) NSNumber *onDeviceConversionEnabledPercentage;
@property (readonly, nonatomic) NSNumber *modernDataCollectionEnabledPercentage;
@property (readonly, nonatomic) NSNumber *actionStoreEnabledPercentage;
@property (readonly, nonatomic) NSNumber *experimentationReportEnabledPercentage;
@property (retain, nonatomic) NSDictionary *configDictionary;
@property (readonly, nonatomic) BOOL onDeviceAttributionEnabled;
@property (readonly, nonatomic) BOOL onDeviceConversionEnabled;
@property (readonly, nonatomic) BOOL modernDataCollectionEnabled;
@property (readonly, nonatomic) BOOL actionStoreEnabled;
@property (readonly, nonatomic) BOOL experimentationReportEnabled;

+ (id)path;

- (void).cxx_destruct;
- (id)_fileSystemPath;
- (void)_clearRollout;
- (BOOL)_isSliceWithinEnablementPercentage:(id)a0 forFeature:(id)a1;
- (id)_knownRollout;
- (void)_storeRolloutForFlag:(id)a0 isEnabled:(BOOL)a1 slice:(id)a2;

@end

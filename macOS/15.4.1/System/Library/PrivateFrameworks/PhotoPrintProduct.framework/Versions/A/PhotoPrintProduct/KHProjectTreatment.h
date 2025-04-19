@interface KHProjectTreatment : KHTreatment

+ (id)treatmentWithName:(id)a0 fromDatabase:(id)a1;
+ (id)allTreatmentsFromDatabase:(id)a0;
+ (id)treatmentForKey:(long long)a0 fromDatabase:(id)a1;
+ (id)treatmentWithConversionName:(id)a0 fromDatabase:(id)a1;

- (void)remove;
- (id)behaviors;
- (id)backgroundLayers;
- (id)allLayers;
- (void)addBackgroundLayer:(id)a0;
- (void)addForegroundLayer:(id)a0;
- (id)foregroundLayers;
- (BOOL)isProjectModel;
- (id)modelsUsingTreatment;
- (id)treatmentFrameLayersWithContentEntityClass:(id)a0;
- (id)treatmentLayersForLayerClass:(unsigned long long)a0;

@end

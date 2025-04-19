@class NSString, NSMutableDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_group;

@interface PRSModelManager : NSObject {
    unsigned long long _activeCount;
    NSObject<OS_dispatch_group> *_activeGroup;
    NSObject<OS_dispatch_group> *_modelUpdateGroup;
}

@property (nonatomic) BOOL trialEnabled;
@property (retain, nonatomic) NSString *modelVersion;
@property (retain, nonatomic) NSString *experimentId;
@property (retain, nonatomic) NSString *modelType;
@property (retain, nonatomic) NSMutableDictionary *models;
@property (retain, nonatomic) NSString *otherModelsType;
@property (retain, nonatomic) NSMutableDictionary *otherModels;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) BOOL disablePolicy;

+ (id)sharedModelManager;
+ (void)cannedInfoForType:(unsigned long long)a0 directivesPath:(id *)a1 modelName:(id *)a2;
+ (id)directivesFromFilePath:(id)a0;
+ (void)loadModelWithURL:(id)a0 type:(unsigned long long)a1 directivesPath:(id)a2 intoModelDict:(id)a3 error:(id *)a4;
+ (BOOL)loadModelsWithDirectory:(id)a0 intoModelDict:(id)a1;
+ (void)pathsFor:(unsigned long long)a0 withParentPath:(id)a1 modelPath:(id *)a2 directivesPath:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)triggerUpdate;
- (BOOL)loadModels;
- (float *)computeL2ScoresForVectors:(id)a0 secondVector:(id)a1 withServerFeatures:(id)a2 withBundleFeatures:(id)a3 experimentalWeight1:(double)a4 experimentalWeight2:(double)a5 shouldCancel:(BOOL *)a6 clientBundle:(id)a7;
- (float *)computeScoresForFeatures:(id)a0 withBundleFeatures:(id)a1 serverBundleFeatures:(id)a2 usingModelContext:(id)a3 qos:(unsigned int)a4 shouldCancel:(BOOL *)a5 filterBundle:(id)a6;
- (id)getL2ModelVersionForClientBundle:(id)a0;
- (void)loadCannedModelWithType:(unsigned long long)a0 error:(id *)a1;
- (BOOL)loadCannedModels;
- (BOOL)otherModelsAvailable;
- (double)testL2WithData:(id)a0 experimental:(BOOL)a1;
- (void)updateModelsAccordingToHierarchy;
- (void)updateModelsAccordingToHierarchy:(id)a0 updateEnabled:(BOOL)a1 disablePendingUpdates:(BOOL)a2;

@end

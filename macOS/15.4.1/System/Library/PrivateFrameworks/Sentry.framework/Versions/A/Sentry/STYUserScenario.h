@class NSString;

@interface STYUserScenario : NSObject

@property (readonly) NSString *scenarioGroup;
@property (readonly) NSString *scenarioID;
@property (readonly) long long kpi;
@property (readonly) NSString *titleText;
@property (readonly) NSString *appBundleId;
@property (readonly) NSString *appName;
@property (readonly) int appProcessID;

+ (id)wakeScenario:(id)a0 wakeSubtype:(id)a1 error:(id *)a2;
+ (id)scenarioFromSignpostEvent:(id)a0 error:(id *)a1;
+ (id)scenarioFromSignpostInterval:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 scenarioGroup:(id)a1 kpi:(long long)a2 processBundleID:(id)a3 titleText:(id)a4 processName:(id)a5 processID:(int)a6;
- (id)initWithLifecycleScenarioCategoryAndModelName:(id)a0 modelName:(id)a1 titleText:(id)a2;

@end

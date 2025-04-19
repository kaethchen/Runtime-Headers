@interface PTInference : NSObject

+ (id)ANEConfigForSynchronousWork;
+ (id)ANEConfigForAsynchronousWork;
+ (int)espressoEngineForPlanPriority:(int)a0;
+ (int)espressoPlanPriorityForAsynchronousWork;
+ (int)espressoPlanPriorityForSynchronousWork;
+ (int)espressoPlanPriorityValidate:(int)a0;

@end

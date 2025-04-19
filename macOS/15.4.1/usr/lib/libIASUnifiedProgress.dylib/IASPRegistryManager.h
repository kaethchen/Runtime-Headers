@interface IASPRegistryManager : NSObject

+ (void)clear;
+ (id)currentPhaseName;
+ (id)phases;
+ (void)setCurrentPhaseName:(id)a0;
+ (void)setPhases:(id)a0;
+ (float)startingPercentage;

@end

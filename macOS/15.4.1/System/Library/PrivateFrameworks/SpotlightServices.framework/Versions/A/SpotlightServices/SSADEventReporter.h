@interface SSADEventReporter : NSObject

+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportBadL2Models;
+ (void)reportBadL3Models;
+ (void)reportKey:(id)a0;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportModelLoadingError;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;

@end

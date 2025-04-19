@interface EXSFeatureFlagManager : NSObject

+ (BOOL)graphSyncEnabled;
+ (BOOL)contactsSyncEnabled;
+ (BOOL)notesSyncEnabled;
+ (BOOL)sandboxingEnabled;

@end

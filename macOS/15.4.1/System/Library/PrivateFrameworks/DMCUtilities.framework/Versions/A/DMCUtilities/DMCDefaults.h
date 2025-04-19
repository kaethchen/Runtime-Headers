@interface DMCDefaults : NSObject

+ (BOOL)boolForDefaultsKey:(id)a0;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)stringForDefaultsKey:(id)a0;
+ (BOOL)DSLiveOnModeEnabled;
+ (BOOL)ESSOTestModeEnabled;
+ (BOOL)ADETestModeEnabled;
+ (id)dictForDefaultsKey:(id)a0;
+ (id)objectForDefaultsKey:(id)a0;

@end

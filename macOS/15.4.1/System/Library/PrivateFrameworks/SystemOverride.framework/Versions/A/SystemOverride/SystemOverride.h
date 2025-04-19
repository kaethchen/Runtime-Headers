@interface SystemOverride : NSObject

+ (BOOL)getSystemOverrideForKey:(id)a0;
+ (BOOL)getSystemOverrideForKey:(id)a0 mountPoint:(id)a1;
+ (BOOL)resetSystemOverrides;
+ (BOOL)resetSystemOverridesForMountPoint:(id)a0;
+ (BOOL)setSystemOverrideValue:(BOOL)a0 forKey:(id)a1;
+ (BOOL)setSystemOverrideValue:(BOOL)a0 forKey:(id)a1 mountPoint:(id)a2;
+ (id)validSystemOverrideKeys;

@end

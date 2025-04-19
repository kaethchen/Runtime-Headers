@interface UASwitchUtilities : NSObject

+ (BOOL)_switchHIDDictionary:(id)a0 conflictsWithDictionary:(id)a1 withinSameFeature:(BOOL)a2;
+ (id)_hidDictionaryDeviceKeysToCompare;
+ (BOOL)_switchHIDDictionary:(id)a0 deviceConflictsWithDictionary:(id)a1 withinSameFeature:(BOOL)a2;
+ (BOOL)switchHIDDictionary:(id)a0 conflictsWithDictionaries:(id)a1 withinSameFeature:(BOOL)a2 outConflictingIndex:(unsigned long long *)a3;

@end

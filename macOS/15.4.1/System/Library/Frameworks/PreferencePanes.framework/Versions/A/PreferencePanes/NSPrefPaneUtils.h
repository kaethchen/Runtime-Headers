@interface NSPrefPaneUtils : NSObject

+ (BOOL)hasBattery;
+ (id)stringForModifiers:(unsigned long long)a0;
+ (id)stringForSymbolicKey:(unsigned long long)a0;
+ (long long)showAllScrollViewWidth;
+ (id)stringForSymbolicKey:(unsigned long long)a0 respectFN:(BOOL)a1;
+ (BOOL)_needFN;
+ (BOOL)_isFunctionCharCodeKey:(id)a0;
+ (id)_labelForVirtualKey:(unsigned long long)a0;
+ (id)_labelForVirtualKey:(unsigned long long)a0 useNamesWhenPossible:(BOOL)a1;
+ (id)_metricsTable;
+ (id)_stringForCharacterCode:(id)a0 useNamesWhenPossible:(BOOL)a1;
+ (id)_stringForVirtualKey:(unsigned long long)a0 modifiers:(unsigned long long)a1 useNamesWhenPossible:(BOOL)a2;
+ (double)_windowWidth;
+ (id)centerTruncateString:(id)a0 toFit:(long long)a1;
+ (void)enableControls:(BOOL)a0 inView:(id)a1 deep:(BOOL)a2;
+ (id)humanStringForCharacterCode:(id)a0 modifiers:(unsigned long long)a1;
+ (id)humanStringForModifiers:(unsigned long long)a0;
+ (id)humanStringForVirtualKey:(unsigned long long)a0 modifiers:(unsigned long long)a1;
+ (BOOL)isFunctionKey:(unsigned long long)a0;
+ (BOOL)isTimeMachineEnabled;
+ (id)sharedPrefPaneUtils;
+ (long long)showAllColumnWidth;
+ (id)stringForCharacterCode:(id)a0 modifiers:(unsigned long long)a1;
+ (id)stringForVirtualKey:(unsigned long long)a0 modifiers:(unsigned long long)a1;

@end

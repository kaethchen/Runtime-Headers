@class NSCondition, NSMutableDictionary, SCRCUserDefaults;

@interface SCRUserDefaultsOverrider : AXKUserDefaultsOverrider

@property (weak, nonatomic) SCRCUserDefaults *_defaults;
@property (retain, nonatomic) NSMutableDictionary *_previousValues;
@property (retain) NSMutableDictionary *_keyValuePairsAwaitingChange;
@property (retain) NSCondition *_defaultsChangedCondition;

- (void).cxx_destruct;
- (void)apply;
- (void)defaultsSetValue:(id)a0 forKey:(id)a1;
- (void)defaultsSynchronize;
- (id)defaultsValueForKey:(id)a0;
- (id)initWithOverrides:(id)a0;
- (void)unset;
- (id)initWithOverrides:(id)a0 userDefaults:(id)a1;

@end

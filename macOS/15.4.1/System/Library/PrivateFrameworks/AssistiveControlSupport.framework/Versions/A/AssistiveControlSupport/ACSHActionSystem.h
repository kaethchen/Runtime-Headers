@interface ACSHActionSystem : ACSHAction

@property (nonatomic) unsigned long long _systemActionType;
@property (nonatomic) unsigned long long systemActionType;

+ (id)actionWithType:(unsigned long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)_initWithActionType:(unsigned long long)a0;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end

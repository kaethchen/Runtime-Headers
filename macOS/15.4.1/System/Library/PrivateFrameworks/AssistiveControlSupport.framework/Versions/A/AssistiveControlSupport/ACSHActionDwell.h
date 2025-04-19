@interface ACSHActionDwell : ACSHAction

@property (nonatomic) long long dwellActionType;
@property (nonatomic) BOOL isSingleAction;

- (unsigned long long)hash;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end

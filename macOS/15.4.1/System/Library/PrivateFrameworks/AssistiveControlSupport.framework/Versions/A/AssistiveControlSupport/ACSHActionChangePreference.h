@interface ACSHActionChangePreference : ACSHAction

@property (nonatomic) unsigned long long preferenceOption;
@property (retain, nonatomic) id preferenceValue;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)actionType;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end

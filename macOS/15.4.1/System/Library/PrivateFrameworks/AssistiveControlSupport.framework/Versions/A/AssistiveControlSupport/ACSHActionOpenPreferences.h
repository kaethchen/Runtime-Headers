@interface ACSHActionOpenPreferences : ACSHAction

@property (nonatomic) long long assistiveControlType;

- (id)init;
- (unsigned long long)actionType;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end

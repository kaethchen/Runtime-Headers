@interface ACSHActionPerformKeyMacro : ACSHSequencedAction

@property (nonatomic) BOOL shouldNotLockModifierKey;

- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end

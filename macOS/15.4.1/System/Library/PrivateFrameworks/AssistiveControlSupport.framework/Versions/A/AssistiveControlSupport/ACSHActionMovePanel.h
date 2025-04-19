@interface ACSHActionMovePanel : ACSHAction

@property (nonatomic) unsigned long long moveToPosition;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDescription;
- (id)paramDictionaryForSaving;

@end

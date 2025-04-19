@class NSDictionary;

@interface BKSKeyboardDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSDictionary *modifierKeyRemapping;
@property (retain, nonatomic) NSDictionary *oldModifierKeyRemapping;

- (id)init;
- (void)_bindAndRegisterDefaults;
- (void)migrateIfNeeded;

@end

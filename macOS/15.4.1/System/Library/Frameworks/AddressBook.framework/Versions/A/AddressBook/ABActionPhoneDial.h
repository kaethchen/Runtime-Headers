@interface ABActionPhoneDial : NSObject

- (id)unlocalizedTitle;
- (id)actionProperty;
- (id)numberForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end

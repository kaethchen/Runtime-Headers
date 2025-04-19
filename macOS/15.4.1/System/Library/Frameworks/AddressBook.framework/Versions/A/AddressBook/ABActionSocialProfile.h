@class NSString;

@interface ABActionSocialProfile : NSObject <ABActionDelegate>

@property (readonly) NSString *actionProperty;

- (id)unlocalizedTitle;
- (id)_actionURLForProfile:(id)a0;
- (id)_localizationStringKeyForProfile:(id)a0;
- (id)_standardURLForProfile:(id)a0;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end

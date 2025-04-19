@class NSString, NSDictionary;

@interface _NSQuickActionPresentation : NSObject

@property (readonly, copy) NSString *mode;
@property (readonly, copy) NSDictionary *matchingExtensionAttributes;
@property (readonly, copy) NSString *titleExtensionAttributeKey;
@property (readonly, copy) NSString *iconNameExtensionAttributeKey;
@property (readonly, copy) NSString *colorNameExtensionAttributeKey;
@property (readonly, copy) NSString *legacyServicePresentationMode;
@property (readonly, copy) NSString *preferencesDomain;
@property (readonly, copy) NSString *orderingPreferencesKey;
@property (readonly, copy) NSString *activePreferencesKey;
@property (readonly, copy) NSString *preferencesNotificationName;

+ (id)presentationForMode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMode:(id)a0 matchingExtensionAttributes:(id)a1 titleExtensionAttributeKey:(id)a2 iconNameExtensionAttributeKey:(id)a3 colorNameExtensionAttributeKey:(id)a4 legacyServicePresentationMode:(id)a5;

@end

@class NSDictionary, NSString;

@interface AMSUserNotificationSettingsItem : NSObject

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSDictionary *updateDictionary;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) NSString *identifier;
@property BOOL userChanged;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithIdentifier:(id)a0 enabled:(BOOL)a1;

@end

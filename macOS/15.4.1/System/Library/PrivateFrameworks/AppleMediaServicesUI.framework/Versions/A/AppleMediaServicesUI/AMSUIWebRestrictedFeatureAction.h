@class NSString, NSNumber;

@interface AMSUIWebRestrictedFeatureAction : AMSUIWebAction

@property (retain) NSString *identifier;
@property (retain) NSNumber *enabled;

- (void).cxx_destruct;
- (id)_explicitContentAllowed;
- (BOOL)_forcedPreferencesValueForKey:(id)a0 applicationID:(id)a1;
- (id)_preferencesValueForKey:(id)a0 applicationID:(id)a1;
- (void)_setPreferencesAppValue:(id)a0 forKey:(id)a1 applicationID:(id)a2;
- (id)_unknownIdentifierError;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end

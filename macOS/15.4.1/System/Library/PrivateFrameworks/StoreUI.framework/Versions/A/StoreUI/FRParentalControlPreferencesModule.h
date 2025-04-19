@class FRManagedUser, NSString, SFAuthorizationView, NSPopUpButton;

@interface FRParentalControlPreferencesModule : FRPreferencesModule <NSMenuDelegate> {
    SFAuthorizationView *authorizationView;
    NSPopUpButton *limitPopUpButton;
}

@property (readonly) FRManagedUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)currentParentalControlLimitValue;
+ (long long)defaultLimitValue;
+ (id)limitValues;
+ (BOOL)validLimitValue:(long long)a0;

- (void).cxx_destruct;

@end

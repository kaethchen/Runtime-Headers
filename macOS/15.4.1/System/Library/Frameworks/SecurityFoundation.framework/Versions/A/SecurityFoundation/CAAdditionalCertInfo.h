@class NSNumber, NSString;

@interface CAAdditionalCertInfo : NSObject {
    NSNumber *_caSerialNumber;
    NSNumber *_caValidityPeriod;
    int _caCreateCAWebSite;
    int _signInvite;
    struct __SecIdentity { } *_caChosenIdentityToSignInvitation;
    NSString *_alternateLocationForCAWebSite;
}

- (void)dealloc;
- (int)_signInvitation;
- (struct __SecIdentity { } *)_chosenIdentityToSignInvitation;
- (id)_validityPeriod;
- (id)_alternateLocationForCAWebSite;
- (int)_createCAWebSite;
- (id)_serialNumber;
- (void)_setAlternateLocationForCAWebSite:(id)a0;
- (void)_setCreateCAWebSite:(int)a0;
- (void)_setSerialNumber:(id)a0;
- (void)_setToDefaults;
- (void)_setValidityPeriod:(id)a0;
- (void)setChosenIdentityToSignInvitation:(struct __SecIdentity { } *)a0;

@end

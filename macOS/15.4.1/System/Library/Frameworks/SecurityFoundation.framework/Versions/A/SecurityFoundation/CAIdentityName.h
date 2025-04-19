@class NSString;

@interface CAIdentityName : NSObject {
    NSString *_caIdentityName;
    int _caLetUserOverrideDefaults;
    int _caMakeCAConfigFileTheDefaultCA;
    int _caSelfSignedChosen;
    BOOL _caDidWarnAboutSelfSignedCert;
    NSString *_caAdminCAEmailAddress;
    int _certType;
}

- (void)dealloc;
- (void)_setDidWarnAboutSelfSignedCert:(BOOL)a0;
- (id)_CAAdminEmailAddress;
- (int)_certType;
- (BOOL)_didWarnAboutSelfSignedCert;
- (id)_identityName;
- (BOOL)_isCATypeSelfSignedRoot;
- (BOOL)_isCertTypeCodeSigning;
- (BOOL)_isCertTypeSMIME;
- (BOOL)_isCertTypeSSLServer;
- (BOOL)_isCertTypeVPNClient;
- (BOOL)_isCertTypeVPNServer;
- (int)_letUserOverrideDefaults;
- (int)_makeDefaultCA;
- (void)_setCAAdminEmailAddress:(id)a0;
- (void)_setCAType:(int)a0;
- (void)_setCertType:(int)a0;
- (void)_setIdentityName:(id)a0;
- (void)_setLetOverrideDefaults:(int)a0;
- (void)_setToDefaults;

@end

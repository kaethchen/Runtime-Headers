@interface CAExtendedKeyUsageExtension : NSObject {
    BOOL _caDoneCAExtendedKUExts;
    int _caExtendedKUEPresent;
    int _caExtendedKUEIsCritical;
    int _caExtendedKUEEmailProtection;
    int _caExtendedKUESSLClientAuth;
    int _caExtendedKUESSLServerAuth;
    int _caExtendedKUECodeSigning;
    int _caExtendedKUECodeSigningDevelopment;
    int _caExtendedKUECodeSigningApple;
    int _caExtendedKUEiChatSigning;
    int _caExtendedKUEiChatEncryption;
    int _caExtendedKUEDotMacEmailSigning;
    int _caExtendedKUEClAuthPKINIT;
    int _caExtendedKUESrvrAuthPKINIT;
    int _caExtendedKUEDotMacEmailEncryption;
    int _caExtendedKUEAny;
    struct cssm_data { unsigned long long Length; char *Data; } _caExtendedKUEOIDs[14];
    int _caCertAuthorityExtendedKUEPresent;
    int _caCertAuthorityExtendedKUEIsCritical;
    int _caCertAuthorityExtendedKUEEmailProtection;
    int _caCertAuthorityExtendedKUESSLClientAuth;
    int _caCertAuthorityExtendedKUESSLServerAuth;
    int _caCertAuthorityExtendedKUECodeSigning;
    int _caCertAuthorityExtendedKUECodeSigningDevelopment;
    int _caCertAuthorityExtendedKUECodeSigningApple;
    int _caCertAuthorityExtendedKUEiChatSigning;
    int _caCertAuthorityExtendedKUEiChatEncryption;
    int _caCertAuthorityExtendedKUEDotMacEmailSigning;
    int _caCertAuthorityExtendedKUEClAuthPKINIT;
    int _caCertAuthorityExtendedKUESrvrAuthPKINIT;
    int _caCertAuthorityExtendedKUEDotMacEmailEncryption;
    int _caCertAuthorityExtendedKUEAny;
    int _caUserExtendedKUEPresent;
    int _caUserExtendedKUEIsCritical;
    int _caUserExtendedKUEEmailProtection;
    int _caUserExtendedKUESSLClientAuth;
    int _caUserExtendedKUESSLServerAuth;
    int _caUserExtendedKUECodeSigning;
    int _caUserExtendedKUECodeSigningDevelopment;
    int _caUserExtendedKUECodeSigningApple;
    int _caUserExtendedKUEiChatSigning;
    int _caUserExtendedKUEiChatEncryption;
    int _caUserExtendedKUEDotMacEmailSigning;
    int _caUserExtendedKUEClAuthPKINIT;
    int _caUserExtendedKUESrvrAuthPKINIT;
    int _caUserExtendedKUEDotMacEmailEncryption;
    int _caUserExtendedKUEAny;
}

- (BOOL)_validate;
- (void)_setDotMacEmailEncryptionUsage:(id)a0;
- (void)_setIsCritical:(id)a0;
- (void)_setToSSLServer;
- (BOOL)_alreadySpecifiedCertAuthorityValues;
- (BOOL)_anyUsage;
- (void)_setToSSLClient;
- (BOOL)_codeSigningAppleUsage;
- (BOOL)_codeSigningDevelopmentUsage;
- (BOOL)_codeSigningUsage;
- (BOOL)_dotMacEmailEncryptionUsage;
- (BOOL)_dotMacEmailSigningUsage;
- (BOOL)_emailProtectionUsage;
- (void)_fillInValuesInExtension:(struct __CE_DataAndType { int x0; union { struct __CE_AuthorityKeyID { int x0; struct cssm_data { unsigned long long x0; char *x1; } x1; int x2; struct __CE_GeneralNames *x3; int x4; struct cssm_data { unsigned long long x0; char *x1; } x5; } x0; struct cssm_data { unsigned long long x0; char *x1; } x1; unsigned short x2; struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } x3; struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } x4; struct __CE_ExtendedKeyUsage { unsigned int x0; struct cssm_data *x1; } x5; struct __CE_BasicConstraints { int x0; int x1; unsigned int x2; } x6; struct __CE_CertPolicies { unsigned int x0; struct __CE_PolicyInformation *x1; } x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned int x11; struct __CE_CRLDistPointsSyntax { unsigned int x0; struct __CE_CRLDistributionPoint *x1; } x12; struct __CE_IssuingDistributionPoint { struct __CE_DistributionPointName *x0; int x1; int x2; int x3; int x4; int x5; unsigned char x6; int x7; int x8; } x13; struct __CE_AuthorityInfoAccess { unsigned int x0; struct __CE_AccessDescription *x1; } x14; struct __CE_QC_Statements { unsigned int x0; struct __CE_QC_Statement *x1; } x15; struct __CE_NameConstraints { struct __CE_GeneralSubtrees *x0; struct __CE_GeneralSubtrees *x1; } x16; struct __CE_PolicyMappings { unsigned int x0; struct __CE_PolicyMapping *x1; } x17; struct __CE_PolicyConstraints { int x0; unsigned int x1; int x2; unsigned int x3; } x18; unsigned int x19; struct cssm_data { unsigned long long x0; char *x1; } x20; } x1; int x2; } *)a0 isCACertBeingCreated:(BOOL)a1 extensionIsPresent:(BOOL *)a2;
- (BOOL)_iChatEncryptionUsage;
- (BOOL)_iChatSigningUsage;
- (BOOL)_isCritical;
- (BOOL)_isPresent;
- (BOOL)_pkinitClientAuthUsage;
- (BOOL)_pkinitServerAuthUsage;
- (void)_saveCertAuthorityPanelValues;
- (void)_saveUserPanelValues;
- (void)_setAlreadySpecifiedCertAuthorityValues:(BOOL)a0;
- (void)_setAnyUsage:(id)a0;
- (void)_setCodeSigningUsage:(id)a0;
- (void)_setEDotMacEmailSigningUsage:(id)a0;
- (void)_setEmailProtectionUsage:(id)a0;
- (void)_setExtendedKUECodeSigningApple:(id)a0;
- (void)_setExtendedKUECodeSigningDevelopment:(id)a0;
- (void)_setIChatEncryptionUsage:(id)a0;
- (void)_setIChatSigningUsage:(id)a0;
- (void)_setIsPresent:(id)a0;
- (void)_setPKINITClientAuthUsage:(id)a0;
- (void)_setPKINITServerAuthUsage:(id)a0;
- (void)_setSSLClientAuthUsage:(id)a0;
- (void)_setSSLServerAuthUsage:(id)a0;
- (void)_setToCodeSigning;
- (void)_setToDefaults;
- (void)_setToPresentCritical;
- (void)_setToSMIME;
- (BOOL)_sslClientAuthUsage;
- (BOOL)_sslServerAuthUsage;
- (void)_updatePanelToCertAuthorityValues;
- (void)_updatePanelToUserValues;

@end

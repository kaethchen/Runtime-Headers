@class NSNumber;

@interface CABasicConstraintsExtension : NSObject {
    int _caBasicConstraintsPresent;
    int _caIsCertAuthority;
    int _caPathLengthConstraintPresent;
    NSNumber *_caPathLength;
    int _caCertAuthorityBasicConstraintsPresent;
    int _caCertAuthorityIsCertAuthority;
    int _caCertAuthorityPathLengthConstraintPresent;
    int _caCertAuthorityPathLength;
    int _caUserBasicConstraintsPresent;
    int _caUserIsCertAuthority;
    int _caUserPathLengthConstraintPresent;
    int _caUserPathLength;
    BOOL _caDoneCABasicConstraintsExts;
}

- (void)dealloc;
- (BOOL)_alreadySpecifiedCertAuthorityValues;
- (void)_setPathLength:(id)a0;
- (void)_fillInValuesInExtension:(struct __CE_DataAndType { int x0; union { struct __CE_AuthorityKeyID { int x0; struct cssm_data { unsigned long long x0; char *x1; } x1; int x2; struct __CE_GeneralNames *x3; int x4; struct cssm_data { unsigned long long x0; char *x1; } x5; } x0; struct cssm_data { unsigned long long x0; char *x1; } x1; unsigned short x2; struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } x3; struct __CE_GeneralNames { unsigned int x0; struct __CE_GeneralName *x1; } x4; struct __CE_ExtendedKeyUsage { unsigned int x0; struct cssm_data *x1; } x5; struct __CE_BasicConstraints { int x0; int x1; unsigned int x2; } x6; struct __CE_CertPolicies { unsigned int x0; struct __CE_PolicyInformation *x1; } x7; unsigned short x8; unsigned int x9; unsigned int x10; unsigned int x11; struct __CE_CRLDistPointsSyntax { unsigned int x0; struct __CE_CRLDistributionPoint *x1; } x12; struct __CE_IssuingDistributionPoint { struct __CE_DistributionPointName *x0; int x1; int x2; int x3; int x4; int x5; unsigned char x6; int x7; int x8; } x13; struct __CE_AuthorityInfoAccess { unsigned int x0; struct __CE_AccessDescription *x1; } x14; struct __CE_QC_Statements { unsigned int x0; struct __CE_QC_Statement *x1; } x15; struct __CE_NameConstraints { struct __CE_GeneralSubtrees *x0; struct __CE_GeneralSubtrees *x1; } x16; struct __CE_PolicyMappings { unsigned int x0; struct __CE_PolicyMapping *x1; } x17; struct __CE_PolicyConstraints { int x0; unsigned int x1; int x2; unsigned int x3; } x18; unsigned int x19; struct cssm_data { unsigned long long x0; char *x1; } x20; } x1; int x2; } *)a0 isCACertBeingCreated:(BOOL)a1 extensionIsPresent:(BOOL *)a2;
- (BOOL)_isPresent;
- (id)_pathLength;
- (int)_pathLengthPresent;
- (void)_saveCertAuthorityPanelValues;
- (void)_saveUserPanelValues;
- (void)_setAlreadySpecifiedCertAuthorityValues:(BOOL)a0;
- (void)_setCertAuthorityBasicConstraintsPresent:(BOOL)a0;
- (void)_setCertAuthorityIsCertAuthority:(BOOL)a0;
- (void)_setIsPresent:(id)a0;
- (void)_setPathLengthPresent:(id)a0;
- (void)_setToDefaults;
- (void)_updatePanelToCertAuthorityValues;
- (void)_updatePanelToUserValues;

@end

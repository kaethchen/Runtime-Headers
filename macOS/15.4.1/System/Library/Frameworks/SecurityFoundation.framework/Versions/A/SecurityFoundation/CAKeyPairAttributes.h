@interface CAKeyPairAttributes : NSObject {
    int _caKeySize;
    int _caKeyAlgorithm;
    int _caUserKeySize;
    int _caUserKeyAlgorithm;
    int _caCertAuthorityKeySize;
    int _caCertAuthorityKeyAlgorithm;
    BOOL _caDoneCAKeyPair;
    struct __SecAccess { } *_caSecAccessRef;
}

- (void)dealloc;
- (void)_updateKeyPairPanelToUserValues;
- (struct __SecAccess { } *)_accessRef;
- (int)_certAuthorityKeySize;
- (int)_certAuthoritykeyAlgorithm;
- (BOOL)_doneCAKeyPair;
- (int)_keyAlgorithm;
- (int)_keySize;
- (void)_saveCAKeyPairPanelValues;
- (void)_saveUserKeyPairPanelValues;
- (void)_setAccessRef:(struct __SecAccess { } *)a0;
- (void)_setCertAuthorityKeyAlgorithm:(int)a0;
- (void)_setCertAuthorityKeySize:(int)a0;
- (void)_setDoneCAKeyPair:(BOOL)a0;
- (void)_setKeyAlgorithm:(id)a0;
- (void)_setKeySize:(id)a0;
- (void)_setToDefaults;
- (void)_updateKeyPairPanelToCAValues;
- (int)_userKeyAlgorithm;
- (int)_userKeySize;

@end

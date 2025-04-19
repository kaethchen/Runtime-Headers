@interface BYPersonalizationOperation : BYOperation

- (id)description;
- (void)main;
- (BOOL)required;
- (id)_dataWithRandomBytesOfLength:(unsigned long long)a0;
- (void)_personalizeWithDeviceIdentity:(id)a0;
- (int)_configureAMAI:(struct __AMAuthInstall { } *)a0 deviceIdentity:(id)a1 uuid:(id)a2;

@end

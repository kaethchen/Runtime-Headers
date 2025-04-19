@interface BOSConfigureRequestOperation : BOSOperation

- (id)description;
- (void)main;
- (BOOL)_loadUpdateBundleAndBrainBundle;
- (id)__extractFirmwareBundleComponent:(id)a0 error:(id *)a1;
- (BOOL)_extractBundleAndBrainFromInstallerPackages;
- (id)_extractFirmwareBundleComponent:(id)a0 error:(id *)a1;
- (BOOL)_validateOptions;

@end

@interface PFXRestoreInfoFirmwareCopierOS : PFXSoCRestoreInfoFirmwareCopierOS

- (id)firmwareKeyFromBuildIdentityDict:(id)a0 deviceInfo:(id)a1;
- (void *)copyAndReadFirmwareDataWithCFError:(struct __CFError **)a0;

@end

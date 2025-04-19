@interface AXMagnifierAssetPolicy : AXAssetPolicy

- (id)assetType;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
- (id)minSupportedFormatVersion;
- (BOOL)shouldCopyLocally;
- (BOOL)shouldUseProductionServerForInternalBuilds;

@end

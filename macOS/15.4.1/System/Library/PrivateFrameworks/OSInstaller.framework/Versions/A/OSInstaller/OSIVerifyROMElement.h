@interface OSIVerifyROMElement : OSIInstallQueueElement {
    unsigned long long _romFeatures;
}

- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (unsigned long long)loadROMFeatures;
- (BOOL)apfsSupportedByROM;
- (id)checkROMFeatures;
- (id)errorByReplacingError:(id)a0;
- (double)estimatedTimeToComplete;
- (BOOL)ignoreIncompatibleROMFeatures;
- (BOOL)ignoreLargeBaseSystemSupportMismatch;
- (BOOL)largeBaseSystemsSupportedByROM;
- (unsigned long long)loadFeaturesFromRegistryEntry:(const char *)a0 property:(id)a1;
- (unsigned long long)unsignedLongLongFromValue:(id)a0;

@end

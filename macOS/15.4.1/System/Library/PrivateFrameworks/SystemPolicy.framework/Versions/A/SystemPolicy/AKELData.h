@class BundleData, NSDictionary;

@interface AKELData : NSObject {
    BundleData *_bundle;
    NSDictionary *_signatureExceptionData;
    NSDictionary *_timestampExceptionData;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)findLegacyKextBundleID:(id)a0;
- (BOOL)isKextAllowedWithoutSecureTimestamp:(id)a0;
- (BOOL)isLegacyKextAllowed:(id)a0;
- (void)loadFromBundleData:(id)a0;
- (BOOL)reloadIfNecessary;

@end

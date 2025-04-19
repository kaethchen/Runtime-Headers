@class HMDApplicationInfo;

@interface __HMDExtensionApplicationInfo : __HMDBundleApplicationInfo {
    HMDApplicationInfo *_hostApplicationInfo;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInstalled;
- (id)initWithRecord:(id)a0;
- (id)vendorIdentifier;
- (id)attributeDescriptions;
- (id)hostApplicationInfo;

@end

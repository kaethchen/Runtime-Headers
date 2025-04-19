@class NSString, NSURL, NSDictionary;

@interface SESConfig : NSObject {
    NSURL *_path;
    NSString *_minOSKey;
    float _productVersion;
    unsigned long long _cachedComponent;
    NSDictionary *_cache;
}

@property (readonly) NSString *cachedFileName;

- (void).cxx_destruct;
- (id)getConfigForManufacturer:(id)a0 component:(unsigned long long)a1 error:(id *)a2;
- (id)getContentsOfAssetFile:(id)a0 component:(unsigned long long)a1 error:(id *)a2;
- (id)initWithDeviceClass:(id)a0 productVersion:(float)a1;
- (id)initWithDeviceClass:(id)a0 productVersion:(float)a1 path:(id)a2;
- (id)readContentsOfPlist:(id)a0 component:(id)a1 isProfile:(BOOL)a2 error:(id *)a3;

@end

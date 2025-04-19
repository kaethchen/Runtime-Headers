@class NSString, NSDictionary;

@interface PKBundleStorage : NSObject {
    NSString *_path;
    NSString *_storageType;
    NSString *_identifier;
    NSDictionary *_versionAttributes;
}

@property (readonly) NSString *storageType;
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *versionAttributes;

+ (id)_allStorageClasses;
+ (id)bundleStorageWithPath:(id)a0;

- (void)dealloc;
- (id)description;
- (id)_initWithPath:(id)a0 fileAttributes:(id)a1;
- (id)_initWithPath:(id)a0 storageType:(id)a1 identifier:(id)a2 versionAttributes:(id)a3;

@end

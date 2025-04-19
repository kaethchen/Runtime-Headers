@class NSString, ISDFileReference, NSMutableArray;

@interface ISDDataClass : ISDDataObject <NSCoding> {
    NSString *_name;
    ISDFileReference *_bundleRef;
    NSString *_uiHelperClassName;
    NSString *_imagePath;
    NSString *_appProviderIdentifier;
    NSString *_category;
    NSString *_longName;
    NSMutableArray *_versionInfo;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)bundle;
- (id)displayName;
- (id)category;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)setCategory:(id)a0;
- (id)versionInfo;
- (id)imagePath;
- (void)setImagePath:(id)a0;
- (id)longName;
- (void)setVersionInfo:(id)a0;
- (id)appProviderIdentifier;
- (id)bundleRef;
- (id)fastName;
- (BOOL)morphInToObject:(id)a0;
- (void)setAppProviderIdentifier:(id)a0;
- (void)setBundleRef:(id)a0;
- (void)setLongName:(id)a0;
- (void)setUIHelperClassName:(id)a0;
- (id)singularDisplayName;
- (Class)uiHelperClass;
- (id)uiHelperClassName;

@end

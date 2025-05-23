@class NSString, NSSet, NSError, NSDate;

@interface MIBundleMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSString *installBuildVersion;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) unsigned long long placeholderFailureReason;
@property (retain, nonatomic) NSError *placeholderFailureUnderlyingError;
@property (nonatomic) unsigned long long placeholderFailureUnderlyingErrorSource;
@property (copy, nonatomic) NSString *watchKitAppExecutableHash;
@property (nonatomic) unsigned long long autoInstallOverride;
@property (copy, nonatomic) NSString *alternateIconName;
@property (copy, nonatomic) NSString *linkedParentBundleID;
@property (copy, nonatomic) NSSet *linkedChildBundleIDs;

+ (id)metadataFromURL:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;

@end

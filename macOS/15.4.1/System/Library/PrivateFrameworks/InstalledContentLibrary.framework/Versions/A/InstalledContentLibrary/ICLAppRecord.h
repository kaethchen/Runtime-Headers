@class NSURL, NSArray;

@interface ICLAppRecord : ICLPlaceholderRecord <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *parallelPlaceholderURL;
@property (nonatomic) BOOL isUpdatedSystemApp;
@property (copy, nonatomic) NSArray *driverKitExtensionURLs;
@property (copy, nonatomic) NSArray *stashedVersions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLegacyRecordDictionary:(id)a0;
- (id)legacyRecordDictionary;

@end

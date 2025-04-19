@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *domainGroupName;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSString *settingsClassName;
@property (readonly, nonatomic) NSString *settingsFrameworkBundlePath;

+ (id)_readDomainInfoFromPersistence;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0;
- (void)loadSettingsClassBundleIfNecessary;

@end

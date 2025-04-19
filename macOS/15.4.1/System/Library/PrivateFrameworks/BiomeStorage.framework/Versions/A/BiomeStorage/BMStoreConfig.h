@class NSString, BMAccount, BMPruningPolicy;

@interface BMStoreConfig : NSObject <NSCopying> {
    NSString *_streamIdentifierForLogging;
    NSString *_datastorePath;
    unsigned long long _streamType;
}

@property (readonly, nonatomic) unsigned long long configDatastoreVersion;
@property (nonatomic) long long storeLocationOption;
@property (copy, nonatomic) NSString *remoteName;
@property (copy, nonatomic) BMAccount *account;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) unsigned int uid;
@property (retain, nonatomic) BMPruningPolicy *pruningPolicy;
@property (readonly, nonatomic) NSString *datastorePath;
@property (readonly, nonatomic) unsigned long long segmentSize;
@property (readonly, nonatomic) unsigned long long protectionClass;

+ (id)new;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)a0;
+ (id)newPublicStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0;
+ (id)newRestrictedStreamDefaultConfiguration;
+ (id)newRestrictedStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0 protectionClass:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (unsigned long long)streamTypeFromStorePath:(id)a0;
+ (unsigned long long)_streamTypeFromStorePath:(id)a0 domain:(unsigned long long *)a1;
+ (int)defaultStoreVersion;
+ (id)newLibraryStoreConfigForStreamIdentifier:(id)a0 domain:(unsigned long long)a1 segmentSize:(unsigned long long)a2 protectionClass:(unsigned long long)a3 pruningPolicy:(id)a4;
+ (id)newPrivateStreamDefaultConfigurationWithProtectionClass:(unsigned long long)a0 segmentSize:(unsigned long long)a1;
+ (id)newPrivateStreamDefaultConfigurationWithStoreBasePath:(id)a0 protectionClass:(unsigned long long)a1;
+ (id)newPublicStreamDefaultConfiguration;
+ (id)newRestrictedStreamWithSegmentSize:(unsigned long long)a0 protectionClass:(unsigned long long)a1;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0 protectionClass:(unsigned long long)a1;
+ (id)newStreamDefaultConfigurationForPublicStream:(BOOL)a0 protectionClass:(unsigned long long)a1 segmentSize:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)streamType;
- (id)initWithStoreBasePath:(id)a0 segmentSize:(unsigned long long)a1;
- (id)copyStoreConfigWithUID:(unsigned int)a0;
- (id)copyWithRemoteName:(id)a0;
- (id)subscriptionsConfig;
- (id)tombstonesConfig;
- (id)_initWithStoreVersion:(unsigned long long)a0 storeBasePath:(id)a1 segmentSize:(unsigned long long)a2 protectionClass:(unsigned long long)a3 storeLocationOption:(long long)a4 account:(id)a5 remoteName:(id)a6 pruningPolicy:(id)a7 streamType:(unsigned long long)a8 domain:(unsigned long long)a9 user:(unsigned int)a10 isManaged:(BOOL)a11 streamIdentifier:(id)a12;
- (id)copyWithStoreBasePath:(id)a0;
- (id)initWithStoreBasePath:(id)a0 segmentSize:(unsigned long long)a1 protectionClass:(unsigned long long)a2;
- (id)resolvedPathWithStreamIdentifier:(id)a0;

@end

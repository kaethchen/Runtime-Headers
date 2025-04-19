@interface MSUserDefaultsBucketBarConfigurationProvider : NSObject <MSBucketBarConfigurationProvider> {
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ bucketBarConfigurationKey;
    void /* unknown type, empty encoding */ bucketSelectionConfigurationKey;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ skipNextUpdate;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (id)bucketBarConfiguration;
- (id)bucketSelectionConfiguration;
- (id)initWithUserDefaults:(id)a0 delegate:(id)a1;
- (void)storeBucketBarConfiguration:(id)a0;
- (void)storeBucketSelectionConfiguration:(id)a0;

@end

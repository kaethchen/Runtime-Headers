@class NSString, NSDictionary, MCMPOSIXUser, NSURL;

@interface MCMStaticConfiguration : MCMPlistReadOnly <MCMStaticConfiguration> {
    NSDictionary *_containerConfigMapByEnum;
    Class _containerConfigClass;
}

@property (retain) Class containerConfigClass;
@property (readonly, nonatomic) BOOL errorOnPersonaPropagationFailure;
@property (readonly, nonatomic) BOOL attemptMetadataReconstructionIfMissing;
@property (readonly, nonatomic) MCMPOSIXUser *defaultUser;
@property (readonly, nonatomic) NSDictionary *containerConfigMap;
@property (readonly, nonatomic) NSURL *sourceFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPlistDirectoryURL;

- (void).cxx_destruct;
- (BOOL)loadWithError:(id *)a0;
- (id)_posixUserFromPlistValue:(id)a0;
- (id)configForContainerClass:(unsigned long long)a0;
- (Class)containerConfigClass;
- (id)descriptionForContainerConfiguration;
- (id)initFromPlistAtPathOrName:(id)a0 defaultPlistDirectoryURL:(id)a1;
- (BOOL)override_initNonBoolPropertiesWithPlist:(id)a0 error:(id *)a1;
- (void)setContainerConfigClass:(Class)a0;

@end

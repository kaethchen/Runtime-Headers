@class Protocol, NSString, NSDictionary, NSURL, NSCountedSet;
@protocol MCMFileManagerResolvesPaths, MCMFileManagerReadsData;

@interface MCMPlistReadOnly : NSObject <MCMPlistReadOnly>

@property (readonly, nonatomic) NSURL *defaultPlistDirectoryURL;
@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSString *pathOrName;
@property (readonly, nonatomic) NSDictionary *rawPlist;
@property (readonly, nonatomic) NSDictionary *preprocessedPlist;
@property (retain, nonatomic) NSCountedSet *numIncludes;
@property (copy, nonatomic) id /* block */ featureFlagProvider;
@property (retain, nonatomic) id<MCMFileManagerReadsData, MCMFileManagerResolvesPaths> fileManager;
@property (nonatomic) BOOL keepArtifacts;
@property (readonly, nonatomic) NSURL *sourceFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)loadWithError:(id *)a0;
- (void)_forEachBoolPropertyUsingObjCMagicInProtocol:(id)a0 runBlock:(id /* block */)a1;
- (void)_initBoolPropertiesUsingObjCMagicWithPlist:(id)a0 conformingToProtocol:(id)a1;
- (void)_initBoolPropertyWithName:(id)a0 entry:(id)a1;
- (BOOL)_initPropertiesWithPlist:(id)a0 conformingToProtocol:(id)a1 error:(id *)a2;
- (BOOL)_isNonatomicReadonlyBoolPropertyTypeWithAttributes:(const char *)a0;
- (id)_plistByPreprocessingPlist:(id)a0 conformingToProtocol:(id)a1 error:(id *)a2;
- (id)_plistByResolvingFeatureFlagsInMutablePlist:(id)a0 error:(id *)a1;
- (id)_plistByResolvingIncludeInMutablePlist:(id)a0 conformingToProtocol:(id)a1 error:(id *)a2;
- (id)_urlByResolvingConfigName:(id)a0 defaultPlistDirectoryURL:(id)a1 error:(id *)a2;
- (id)descriptionOfBoolPropertiesWithIndentString:(id)a0;
- (id)initFromPlist:(id)a0 defaultPlistDirectoryURL:(id)a1 conformingToProtocol:(id)a2;
- (id)initFromPlistAtPathOrName:(id)a0 defaultPlistDirectoryURL:(id)a1 conformingToProtocol:(id)a2;
- (id)initWithPreprocessedPlist:(id)a0 conformingToProtocol:(id)a1;
- (id)initWithRawPlist:(id)a0 preprocessedPlist:(id)a1 pathOrName:(id)a2 protocol:(id)a3 defaultPlistDirectoryURL:(id)a4;
- (BOOL)override_initNonBoolPropertiesWithPlist:(id)a0 error:(id *)a1;

@end

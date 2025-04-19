@class NSString, NSArray, PKPackage, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface PKComponent : NSObject {
    NSMutableDictionary *_binarySubpaths;
    NSMutableDictionary *_scriptsDictionary;
    NSMutableDictionary *_pathToPatchInfoDictionary;
    NSMutableDictionary *_pathToRequiredFilesDictionary;
    NSMutableArray *_deferredInstallPaths;
    NSMutableSet *_doNotObsoletePaths;
    NSMutableSet *_doNotObsoletePrefixes;
}

@property (retain) NSString *identifier;
@property (retain) NSString *version;
@property (retain) NSString *prefixPath;
@property BOOL relocatable;
@property BOOL versionChecked;
@property BOOL strictIdentifier;
@property (retain) NSArray *subpaths;
@property PKPackage *package;
@property (retain) NSString *destinationPath;

+ (BOOL)isInstallablePath:(id)a0;
+ (BOOL)_bundleAtPath:(id)a0 matchesVersion:(id)a1;
+ (BOOL)_componentPath:(id)a0 matchesDestination:(id)a1;
+ (id)_findComponentViaLaunchServicesWithIdentifier:(id)a0 version:(id)a1 destination:(id)a2;
+ (id)_findComponentsViaSpotlightWithIdentifier:(id)a0 version:(id)a1 destination:(id)a2;
+ (id)findComponentsWithIdentifier:(id)a0 destination:(id)a1;
+ (id)findComponentsWithIdentifier:(id)a0 version:(id)a1 destination:(id)a2;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithIdentifier:(id)a0 version:(id)a1;
- (long long)versionCompare:(id)a0;
- (id)_deferredInstallPaths;
- (id)_doNotObsoletePaths;
- (id)_doNotObsoletePrefixes;
- (id)_pathToPatchInfoDictionary;
- (id)_pathToRequiredFilesDictionary;
- (id)_scriptsDictionary;
- (id)binarySubpathsForArch:(int)a0 forSubArch:(int)a1;
- (id)componentKey;
- (id)scriptForType:(id)a0;
- (void)setBinarySubpaths:(id)a0 forArch:(int)a1 forSubArch:(int)a2;
- (void)setScript:(id)a0 forType:(id)a1;

@end

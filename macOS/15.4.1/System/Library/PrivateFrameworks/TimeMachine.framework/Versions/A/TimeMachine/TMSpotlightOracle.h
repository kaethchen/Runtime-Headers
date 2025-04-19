@class NSString, MDSPathFilter, NSArray;

@interface TMSpotlightOracle : NSObject

@property (readonly) MDSPathFilter *spotlightFilter;
@property (readonly) NSString *mountPoint;
@property (readonly) int device;
@property (readonly) NSArray *stickyExclusionPaths;
@property (readonly) unsigned char currentIndexingState;
@property BOOL indexTrustable;

+ (id)oracleForMountPoint:(id)a0;
+ (id)oracleForMountPoint:(id)a0 device:(int)a1;
+ (id)oracleForMountPoint:(id)a0 device:(int)a1 findStickyExclusionsUsingSpotlight:(BOOL)a2;
+ (id)stickyExclusionPathsForMountPoint:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpotlightFilter:(id)a0 forMountPoint:(id)a1 device:(int)a2;
- (BOOL)pathIsExcludedFromIndexing:(const char *)a0;

@end

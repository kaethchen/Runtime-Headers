@class SMPathSizer, NSString, NSDictionary, NSURL, NSMutableSet;

@interface SMLocalDiskPathEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol>

@property (nonatomic) struct __CFURLEnumerator { } *pathEnumerator;
@property (nonatomic) struct __CFURLEnumerator { } *subPathEnumerator;
@property BOOL subPathHasBeenRead;
@property BOOL postOrder;
@property (retain) NSURL *currentURL;
@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSMutableSet *cloneIDs;
@property (retain) NSString *basePath;
@property (retain) NSURL *basePathURL;
@property (retain) NSString *alternateBasePath;
@property (retain) NSURL *alternateBasePathURL;
@property BOOL systemVolume;
@property (retain) NSDictionary *firmlinks;
@property (retain, nonatomic) SMPathSizer *sizer;
@property (readonly) BOOL supportsFastEnumeration;

- (void)dealloc;
- (void).cxx_destruct;
- (id)nextObject;
- (void)skipDescendants;
- (id)initWithDirectory:(id)a0;
- (BOOL)hasNext;
- (id)bundleInfoAtCurrentPath;
- (void)continueEnumerationFromPath:(id)a0;
- (long long)getNextURL:(const struct __CFURL **)a0 withError:(struct __CFError **)a1;
- (BOOL)isCurrentPathABundle;
- (BOOL)isCurrentPathADirectory;
- (BOOL)isCurrentPathAPlatformBinary;
- (BOOL)isCurrentPathARegularDirectory;
- (BOOL)isCurrentPathARegularFile;
- (BOOL)isPostorderDirectory;
- (BOOL)isPreorderDirectory;
- (void)loadFirmlinksFromSystemVolume:(id)a0 andDataVolume:(id)a1;
- (id)skipDescendantsReturningStats;
- (id)statsForCurrentPath;

@end

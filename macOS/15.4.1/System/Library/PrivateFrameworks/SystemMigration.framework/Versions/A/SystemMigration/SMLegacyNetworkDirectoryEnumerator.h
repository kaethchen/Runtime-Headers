@class NSNumber, NSMutableArray, SMPathWithAttributes, NSURL, NSArray, NSObject, SMNetworkSourceProxy;
@protocol SMSystem_FileManagerProtocol;

@interface SMLegacyNetworkDirectoryEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol>

@property (weak) SMNetworkSourceProxy *proxy;
@property (weak) NSObject<SMSystem_FileManagerProtocol> *fileSystem;
@property (retain) NSURL *startingPath;
@property (retain) NSNumber *startingDeviceID;
@property (retain) NSMutableArray *directoryStack;
@property (retain) NSMutableArray *directoryEntriesStack;
@property (retain) NSMutableArray *indexStack;
@property (retain) SMPathWithAttributes *currentDirectory;
@property (retain) NSArray *currentDirectoryEntries;
@property (retain) SMPathWithAttributes *currentPathInDirectory;
@property unsigned long long currentPathInDirectoryIndex;
@property BOOL postOrderDirectory;
@property BOOL doneEnumerating;
@property BOOL currentDirectoryNeedsReading;
@property BOOL allowCrossDeviceTraversal;
@property (readonly) BOOL supportsFastEnumeration;

- (void).cxx_destruct;
- (id)nextObject;
- (void)skipDescendants;
- (BOOL)hasNext;
- (id)bundleInfoAtCurrentPath;
- (id)initWithProxy:(id)a0 fileSystem:(id)a1 atRelativePath:(id)a2;
- (BOOL)isCurrentPathABundle;
- (BOOL)isCurrentPathADirectory;
- (BOOL)isCurrentPathAPlatformBinary;
- (BOOL)isCurrentPathARegularDirectory;
- (BOOL)isCurrentPathARegularFile;
- (BOOL)isPostorderDirectory;
- (BOOL)isPreorderDirectory;
- (void)popDirectoryStack;
- (void)pushDirectoryStack;
- (void)readCurrentDirectoryContents;
- (id)skipDescendantsReturningStats;
- (id)statsForCurrentPath;

@end

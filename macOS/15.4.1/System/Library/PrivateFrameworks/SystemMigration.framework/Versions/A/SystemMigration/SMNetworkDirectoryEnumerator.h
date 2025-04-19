@class NSSet, NSDictionary, NSURL, SMNPathingAction, NSDate;
@protocol SMNRemoteProxy;

@interface SMNetworkDirectoryEnumerator : NSDirectoryEnumerator <SMPathEnumerationProtocol> {
    BOOL _supportsLogicalSizing;
}

@property (retain) id<SMNRemoteProxy> remoteProxy;
@property (retain) NSURL *startingPath;
@property (retain) NSSet *dontDescendPaths;
@property (retain) NSDictionary *currentFileInfo;
@property BOOL skipNext;
@property BOOL doneEnumerating;
@property unsigned long long currentEntryType;
@property (retain) NSDictionary *lastSuccessfulEvent;
@property (retain) SMNPathingAction *pathingAction;
@property (retain) NSDate *enumerationStartDate;
@property double timeElapsedEnumerating;
@property BOOL autoSizeBundles;
@property BOOL autoDetectBundles;
@property (readonly) BOOL supportsFastEnumeration;

- (void).cxx_destruct;
- (id)nextObject;
- (void)skipDescendants;
- (BOOL)hasNext;
- (id)nextEvent;
- (id)bundleInfoAtCurrentPath;
- (id)initWithRemoteProxy:(id)a0 startingPath:(id)a1 andDontDescendPaths:(id)a2;
- (BOOL)isCurrentPathABundle;
- (BOOL)isCurrentPathAClone;
- (BOOL)isCurrentPathADirectory;
- (BOOL)isCurrentPathAHardLink;
- (BOOL)isCurrentPathAPlatformBinary;
- (BOOL)isCurrentPathARegularDirectory;
- (BOOL)isCurrentPathARegularFile;
- (BOOL)isPostorderDirectory;
- (BOOL)isPreorderDirectory;
- (void)logEnumerationSummary;
- (id)skipDescendantsReturningStats;
- (id)statsForCurrentPath;

@end

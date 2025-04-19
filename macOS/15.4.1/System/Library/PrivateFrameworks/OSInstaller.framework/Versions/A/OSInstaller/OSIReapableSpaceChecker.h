@class SMPaths, OSInstallOptions;

@interface OSIReapableSpaceChecker : NSObject

@property (retain) OSInstallOptions *options;
@property (retain) SMPaths *pather;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)reapableFiles;
- (id)reapableSpace;
- (BOOL)willBlock;
- (void)_calculateSystemPathsAndSize;

@end

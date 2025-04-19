@class SMPathStats, NSMutableDictionary, NSDictionary, NSURL, SMSystem_Daemon, NSArray, NSDirectoryEnumerator;
@protocol SMPathEnumerationProtocol;

@interface SMPathsUserHomeScanner : NSObject {
    SMPathStats *statsForMiscUserHomeContents;
}

@property (retain) NSURL *path;
@property (readonly) SMSystem_Daemon *system;
@property (readonly) NSDictionary *longTermSystemIdentifier;
@property (retain) NSMutableDictionary *pathStatsByTopLevelFolder;
@property BOOL shallowScanOnly;
@property (readonly) NSArray *allTopLevelContents;
@property (readonly) NSDirectoryEnumerator<SMPathEnumerationProtocol> *allFilesEnumerator;
@property (weak) NSArray *updateClients;

- (void).cxx_destruct;
- (void)processUserHome;
- (id)initWithRelativeHomePath:(id)a0 onSystem:(id)a1;
- (id)statsForDirectory:(id)a0;

@end

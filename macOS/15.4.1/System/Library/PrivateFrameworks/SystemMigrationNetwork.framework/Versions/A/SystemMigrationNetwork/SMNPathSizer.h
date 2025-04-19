@class NSMutableSet;

@interface SMNPathSizer : NSObject

@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSMutableSet *cloneIDs;

- (id)init;
- (void).cxx_destruct;
- (id)statsForURL:(id)a0;

@end

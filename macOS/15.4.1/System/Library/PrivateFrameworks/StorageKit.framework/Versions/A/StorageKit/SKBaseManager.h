@interface SKBaseManager : NSObject

@property (readonly, nonatomic) BOOL supportsCocoa;

+ (id)sharedManager;
+ (id)defaultVisibleRoles;

- (id)init;
- (id)allDisks;
- (id)formatableFileSystems;
- (id)knownDiskForDictionary:(id)a0;
- (void)logEvent:(id)a0 eventPayloadBuilder:(id /* block */)a1;
- (id)wholeDiskForDisk:(id)a0;

@end

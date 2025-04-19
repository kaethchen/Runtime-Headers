@class NSMutableDictionary;

@interface IKTempDirectoryHandler : NSObject {
    NSMutableDictionary *_tempDirectories;
}

+ (id)sharedTempDirectoryHandler;

- (id)init;
- (void)applicationWillTerminate:(id)a0;
- (id)tempDirectoryPathForKey:(id)a0;
- (id)tempDirectoryURLForKey:(id)a0;

@end

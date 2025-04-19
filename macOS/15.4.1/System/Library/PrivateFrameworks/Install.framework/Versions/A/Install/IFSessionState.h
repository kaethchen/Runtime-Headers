@class NSMutableSet, NSMutableDictionary;

@interface IFSessionState : NSObject {
    BOOL _debugging;
    NSMutableSet *_launchServicesPaths;
    NSMutableSet *_newPaths;
    NSMutableDictionary *_idToPath;
}

- (void)dealloc;
- (id)portName;
- (BOOL)debuggingEnabled;
- (void)setDebuggingEnabled:(BOOL)a0;
- (id)componentIdsWithPath;
- (id)launchServicesPaths;
- (id)newPaths;
- (void)noteComponentId:(id)a0 withPath:(id)a1;
- (void)notePathsForLaunchServicesRegistration:(id)a0;

@end

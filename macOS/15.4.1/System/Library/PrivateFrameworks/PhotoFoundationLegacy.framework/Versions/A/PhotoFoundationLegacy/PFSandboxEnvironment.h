@class NSString;

@interface PFSandboxEnvironment : NSObject

@property (readonly) NSString *realHomeDirectory;
@property (readonly, weak) NSString *sandboxHomeDirectory;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)changeRootForPath:(id)a0 oldRoot:(id)a1 newRoot:(id)a2;
- (id)convertPathToRealHome:(id)a0;
- (id)convertURLToRealHome:(id)a0;
- (id)sandboxHomeDirectory;

@end

@class NSMutableDictionary;

@interface LUIUnmanagedSpaceManager : NSObject

@property (retain) NSMutableDictionary *unmanagedSpaces;

+ (id)sharedUnmanagedSpaceManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)unmanagedSpaceForLevel:(int)a0;

@end

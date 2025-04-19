@class NSMutableSet;

@interface LUIUnmanagedSpace : NSObject

@property unsigned long long spaceID;
@property struct __CFArray { } *spaceIDs;
@property (retain) NSMutableSet *windowIDs;
@property long long shownCount;
@property (readonly) int level;

+ (id)unmanagedSpaceWithLevel:(int)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)addWindow:(id)a0;
- (void)removeWindow:(id)a0;
- (id)initWithLevel:(int)a0;
- (void)_cleanupSpace;
- (long long)_numWindowsInSpace;
- (void)_setupSpace;
- (void)addWindows:(id)a0;
- (void)hideSpace;
- (void)removeWindows:(id)a0;
- (void)showSpace;

@end

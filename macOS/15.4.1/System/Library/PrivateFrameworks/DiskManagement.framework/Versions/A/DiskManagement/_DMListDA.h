@class NSPointerArray, DMTool;

@interface _DMListDA : NSObject {
    double _givenTimeout;
    struct __DASession { } *_givenDASession;
    BOOL _currentDAIdle;
    NSPointerArray *_currentList;
    BOOL _once;
    DMTool *_dmToolOrNil;
}

@property BOOL stopOnDAIdle;
@property BOOL stopOn1ItemFound;

+ (struct __DADisk { } *)waitAndCopyDiskForBSD:(id)a0 daSession:(struct __DASession { } *)a1 timeout:(double)a2 preWait:(double)a3 withDMTool:(id)a4;
+ (int)waitForDADiskAppeared:(id)a0 daSession:(struct __DASession { } *)a1 timeout:(double)a2 withDMTool:(id)a3;
+ (BOOL)waitForDAIdleWithDASession:(struct __DASession { } *)a0 timeout:(double)a1 withDMTool:(id)a2;

- (void)dealloc;
- (BOOL)anticipatingMoreDisks;
- (struct __DADisk { } *)copyCurrentDiskForKey:(id)a0 value:(id)a1;
- (void)doBlockingSearchCopyingDisksForKeyPriv:(id)a0 value:(id)a1;
- (void)doReleaseAndRemoveDisksFromListPriv;
- (id)initWithSession:(struct __DASession { } *)a0 timeout:(double)a1 withDMTool:(id)a2;

@end

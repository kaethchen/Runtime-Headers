@class NSString, NSMutableDictionary, NSArray, RDMutex, NSMutableArray;

@interface PerformSelectorOnThreadManager : NSObject <NSMachPortDelegate> {
    NSMutableDictionary *_threadToPortMap;
    NSArray *_modes;
    RDMutex *_lock;
    NSMutableArray *_commandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (id)detachNewThreadSelector:(SEL)a0 toTarget:(id)a1 withObject:(id)a2;
- (void)handlePortMessage:(id)a0;
- (id)makeKeyForThread:(id)a0;
- (void)performSelector:(SEL)a0 onTarget:(id)a1 withObject:(id)a2 onThread:(id)a3;
- (void)registerCurrentThread;
- (void)threadWrapper:(id)a0;
- (void)unregisterCurrentThread;

@end

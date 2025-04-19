@class RBSAssertion, NSString, NSMutableDictionary, RBSProcessHandle;

@interface FUSBProcess : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_windows;
    NSString *_description;
    unsigned int _lock_highestState;
    RBSAssertion *_lock_stateAssertion;
}

@property (class, nonatomic) int frontmostProcess;
@property (class, nonatomic) int focusedProcess;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) RBSProcessHandle *handle;
@property (readonly, nonatomic, getter=isApplication) BOOL application;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)addWindow:(id)a0;
- (void)removeWindow:(id)a0;
- (void)_lock_updateWindowState;
- (id)initWithProcessID:(int)a0;
- (void)updateWindow:(id)a0 withBlock:(id /* block */)a1;
- (id)windowWithID:(unsigned int)a0;

@end

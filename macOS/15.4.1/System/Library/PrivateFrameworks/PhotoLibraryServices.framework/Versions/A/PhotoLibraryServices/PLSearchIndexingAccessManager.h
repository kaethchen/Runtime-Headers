@class NSObject;
@protocol OS_dispatch_queue;

@interface PLSearchIndexingAccessManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _openBlock;
    id /* block */ _closeBlock;
    unsigned long long _userCount;
    unsigned long long _deferCloseSeconds;
    BOOL _isOpen;
}

- (void).cxx_destruct;
- (void)reset;
- (void)addUser;
- (void)_closeIfZeroUsers;
- (id)initWithQueue:(id)a0 openBlock:(id /* block */)a1 closeBlock:(id /* block */)a2 deferCloseSeconds:(unsigned long long)a3;
- (void)removeUser;

@end

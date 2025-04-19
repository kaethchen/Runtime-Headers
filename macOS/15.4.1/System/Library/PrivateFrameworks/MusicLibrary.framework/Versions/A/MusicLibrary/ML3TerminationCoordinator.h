@class NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ML3TerminationCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

@property (class, readonly, nonatomic) ML3TerminationCoordinator *sharedCoordinator;

@property (readonly, nonatomic) BOOL isSigned;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)execute;
- (void)_performTermination;
- (BOOL)isSignedForReason:(long long)a0;
- (void)secedeForReason:(long long)a0;
- (void)signForReason:(long long)a0;

@end

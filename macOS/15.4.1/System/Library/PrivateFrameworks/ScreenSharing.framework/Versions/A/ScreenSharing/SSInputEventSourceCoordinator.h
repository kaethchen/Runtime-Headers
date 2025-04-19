@class NSRecursiveLock, NSMutableSet, NSObject, NSLock;
@protocol SSInputEventConsumer;

@interface SSInputEventSourceCoordinator : NSObject {
    NSObject<SSInputEventConsumer> *mActiveConsumer;
    NSMutableSet *mEventSources;
    NSMutableSet *mRegisteredConsumers;
    NSLock *mLock;
}

@property (retain) NSRecursiveLock *activeConsumerLock;
@property NSObject<SSInputEventConsumer> *activeConsumer;

+ (id)sharedCoordinator;

- (void)dealloc;
- (id)init;
- (void)removeSource:(id)a0;
- (void)addSource:(id)a0;
- (void)registerConsumer:(id)a0;
- (void)unregisterConsumer:(id)a0;
- (void)deactivateConsumer:(id)a0;

@end

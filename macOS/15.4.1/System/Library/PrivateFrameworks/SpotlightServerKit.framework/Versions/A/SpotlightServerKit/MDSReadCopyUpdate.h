@class NSMutableSet;

@interface MDSReadCopyUpdate : NSObject {
    NSMutableSet *_queueTokenSet;
    id _resource;
}

- (void)dealloc;
- (id)init;
- (void)updateResource:(id)a0;
- (void)registerResourceConsumerQueueToken:(unsigned long long)a0;
- (void)unregisterResourceConsumerQueueToken:(unsigned long long)a0;

@end

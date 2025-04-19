@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (void)removeObject:(id)a0;
- (id)immutableSet;

@end

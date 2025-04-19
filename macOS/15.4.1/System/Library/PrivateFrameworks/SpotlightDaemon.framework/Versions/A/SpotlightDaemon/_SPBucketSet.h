@class NSObject;
@protocol OS_dispatch_queue;

@interface _SPBucketSet : NSObject {
    struct __CFDictionary { } *_members;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property long long count;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)valueForKey:(id)a0;
- (void)addValue:(long long)a0 forKey:(id)a1;
- (void)decay:(long long)a0;
- (void)removeValueForKey:(id)a0;

@end

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface OITSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (unsigned long long)indexForString:(id)a0;
- (id)stringForIndex:(unsigned long long)a0;

@end

@class NSArray;

@interface _NSBlockMultiKeyValueObservation : NSObject {
    NSArray *_observations;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithObject:(id)a0 keyPaths:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;

@end

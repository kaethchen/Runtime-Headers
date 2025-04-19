@class NSSet;

@interface _NSTouchBarFinderObservation : NSObject {
    id _object;
    NSSet *_keyPaths;
    id /* block */ _observer;
}

+ (id)observationForObject:(id)a0 keyPaths:(id)a1 observer:(id /* block */)a2;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initForObject:(id)a0 keyPaths:(id)a1 observer:(id /* block */)a2;

@end

@class NSEnumerator, NSBundle;

@interface _GCDeviceDBBundleDevicePersonalitiesEnumerator : NSEnumerator {
    NSBundle *_bundle;
    NSEnumerator *_personalitiesPaths;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithBundle:(id)a0 personalityPaths:(id)a1;

@end

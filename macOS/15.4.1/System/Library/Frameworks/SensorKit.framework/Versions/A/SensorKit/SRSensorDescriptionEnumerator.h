@class SRSensorsCache, NSDirectoryEnumerator;

@interface SRSensorDescriptionEnumerator : NSEnumerator {
    SRSensorsCache *_sensorsCache;
    unsigned long long _currentSensorDirectoryIndex;
    NSDirectoryEnumerator *_descriptionFileEnumerator;
}

- (void)dealloc;
- (id)nextObject;

@end

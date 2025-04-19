@class NSCache, NSArray;

@interface SRSensorsCache : NSObject {
    NSCache *_sensorsCache;
    NSArray *_sensorDescriptionsDirs;
}

@property (class, retain, nonatomic) SRSensorsCache *defaultCache;

- (void)dealloc;
- (id)init;
- (id)initWithDirectories:(id)a0;

@end

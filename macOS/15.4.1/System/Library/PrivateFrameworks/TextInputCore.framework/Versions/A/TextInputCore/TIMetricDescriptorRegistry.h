@class NSSet, NSDictionary, NSMutableDictionary, NSMutableSet, NSLock;

@interface TIMetricDescriptorRegistry : NSObject {
    NSMutableDictionary *_metricDescriptors;
    NSMutableSet *_invalidMetricNames;
    NSLock *_lock;
}

@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSDictionary *metricDescriptors;
@property (readonly, nonatomic) NSSet *invalidMetricNames;
@property (nonatomic) BOOL loaded;

+ (id)registry;
+ (id)registryWithConfig:(id)a0;
+ (id)registryWithDescriptors:(id)a0 andInvalidMetricNames:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)_loadMetricDescriptors;
- (id)allMetricDescriptors;
- (id)contextFromError:(id)a0;
- (id)initWithDescriptors:(id)a0 andInvalidMetricNames:(id)a1;
- (void)loadMetricDescriptorsIfNecessary;
- (id)metricDescriptorWithName:(id)a0;
- (id)valueFromError:(id)a0 forKey:(id)a1;

@end

@interface OADCountedGraphicFeature : NSObject {
    id mFeature;
}

@property (nonatomic) unsigned long long usageCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)feature;
- (id)initWithFeature:(id)a0;
- (long long)compareUsageCount:(id)a0;
- (void)incrementUsageCount;

@end

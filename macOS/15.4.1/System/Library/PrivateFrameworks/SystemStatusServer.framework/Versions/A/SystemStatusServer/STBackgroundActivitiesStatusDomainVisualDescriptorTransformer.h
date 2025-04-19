@class STBackgroundActivityManager;

@interface STBackgroundActivitiesStatusDomainVisualDescriptorTransformer : NSObject <STStatusDomainDataTransforming> {
    STBackgroundActivityManager *_backgroundActivityManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithBackgroundActivityManager:(id)a0;
- (id)transformedDataForData:(id)a0;

@end

@class PXSectionedDataSource;

@interface _PXStoryMemoryFeedDataSource : NSObject {
    PXSectionedDataSource *_dataSource;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)objectIDAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectReferenceNearestToObjectReference:(id)a0;

@end

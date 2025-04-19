@class NSImage, MKMapSnapshot;

@interface MKLookAroundSnapshot : NSObject {
    MKMapSnapshot *_snapshot;
}

@property (readonly, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id)initWithSnapshot:(id)a0;

@end

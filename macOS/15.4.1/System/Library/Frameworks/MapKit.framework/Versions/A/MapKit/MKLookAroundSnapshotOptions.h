@class MKPointOfInterestFilter, MKMapSnapshotOptions;

@interface MKLookAroundSnapshotOptions : NSObject

@property (retain, nonatomic, getter=_options, setter=_setOptions:) MKMapSnapshotOptions *options;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

- (id)init;
- (void).cxx_destruct;

@end

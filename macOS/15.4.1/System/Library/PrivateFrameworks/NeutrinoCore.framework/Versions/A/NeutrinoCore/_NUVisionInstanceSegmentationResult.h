@class NSIndexSet, NSDictionary, VNInstanceMaskObservation, NSString;
@protocol NURenderStatistics;

@interface _NUVisionInstanceSegmentationResult : _NURenderResult <NUVisionInstanceSegmentationResult>

@property (readonly, nonatomic) VNInstanceMaskObservation *observation;
@property (nonatomic) BOOL usingTargetPoints;
@property (nonatomic) long long observationOrientation;
@property (nonatomic) struct CGSize { double width; double height; } observationScale;
@property (readonly, copy, nonatomic) NSDictionary *perInstanceProperties;
@property (readonly, nonatomic) NSIndexSet *gatedInstances;
@property (readonly, nonatomic) NSIndexSet *instances;
@property (readonly, nonatomic) NSIndexSet *foregroundInstances;
@property (readonly, nonatomic) NSIndexSet *backgroundInstances;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })fullExtentForInstance:(unsigned long long)a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })fullExtentForInstances:(id)a0;
- (id)initWithObservation:(id)a0 usingTargetPoints:(BOOL)a1 observationOrientation:(long long)a2 observationScale:(struct CGSize { double x0; double x1; })a3 perInstanceProperties:(id)a4;
- (id)instancesForCategory:(id)a0;
- (id)newMaskForInstance:(unsigned long long)a0 error:(out id *)a1;
- (id)newMaskForInstances:(id)a0 error:(out id *)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })tightBoundsForInstance:(unsigned long long)a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })tightBoundsForInstances:(id)a0;

@end

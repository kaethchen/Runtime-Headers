@class NSIndexSet;
@protocol PXStoryTimelineSpec;

@interface PXStoryTimelineSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fixedSegmentDuration;
@property (readonly, nonatomic) unsigned long long allowedInlineTitles;
@property (readonly, nonatomic) NSIndexSet *allowedTransitionKinds;
@property (readonly, nonatomic) unsigned long long storyTransitionCurveType;
@property (readonly, nonatomic) char fallbackTransitionKind;
@property (readonly, nonatomic) id<PXStoryTimelineSpec> timelineSpec;

- (void).cxx_destruct;
- (unsigned long long)defaultChangesToUpdateFor;
- (id)initWithExtendedTraitCollection:(id)a0 configuration:(id)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (Class)specClass;

@end

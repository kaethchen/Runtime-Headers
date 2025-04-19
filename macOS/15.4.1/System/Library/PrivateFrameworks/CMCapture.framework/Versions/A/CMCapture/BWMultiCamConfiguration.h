@class NSArray;

@interface BWMultiCamConfiguration : NSObject {
    NSArray *_portTypesPrioritizedForCameraControls;
    NSArray *_unsynchronizedActiveStreamsPortTypes;
    NSArray *_synchronizedActiveStreamsGroupsPortTypes;
    BOOL _stereoVideoCaptureEnabled;
}

+ (void)initialize;
+ (id)configurationWithCurrentStateFromCaptureDevice:(id)a0;
+ (id)configurationWithUnsynchronizedActiveStreamsPortTypes:(id)a0 synchronizedActiveStreamsGroupsPortTypes:(id)a1 stereoVideoCaptureEnabled:(BOOL)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyActiveSynchronizedStreamsGroupsForDevice:(id)a0 errorOut:(int *)a1;
- (id)multiCamConfigurationForDevice:(id)a0 errorOut:(int *)a1;

@end

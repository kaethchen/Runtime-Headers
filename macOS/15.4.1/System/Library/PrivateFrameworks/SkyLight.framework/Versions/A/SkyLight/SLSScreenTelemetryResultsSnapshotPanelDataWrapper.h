@interface SLSScreenTelemetryResultsSnapshotPanelDataWrapper : NSObject

@property (readonly, nonatomic) struct shared_ptr<SLSScreenTelemetryResultsSnapshotPanelData> { struct SLSScreenTelemetryResultsSnapshotPanelData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

+ (id)wrapperWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotPanelData> { struct SLSScreenTelemetryResultsSnapshotPanelData *x0; struct __shared_weak_count *x1; })a0;

- (id)initWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotPanelData> { struct SLSScreenTelemetryResultsSnapshotPanelData *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)totalPixelCount;
- (const float *)rawData;
- (float)avgB;
- (float)avgG;
- (float)avgR;

@end

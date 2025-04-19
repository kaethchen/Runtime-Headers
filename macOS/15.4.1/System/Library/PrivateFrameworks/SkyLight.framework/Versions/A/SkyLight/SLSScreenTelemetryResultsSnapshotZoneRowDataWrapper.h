@interface SLSScreenTelemetryResultsSnapshotZoneRowDataWrapper : NSObject

@property (readonly, nonatomic) struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneRowData> { struct SLSScreenTelemetryResultsSnapshotZoneRowData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

+ (id)wrapperWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneRowData> { struct SLSScreenTelemetryResultsSnapshotZoneRowData *x0; struct __shared_weak_count *x1; })a0;

- (id)initWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneRowData> { struct SLSScreenTelemetryResultsSnapshotZoneRowData *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id).cxx_construct;
- (unsigned long long)row;
- (unsigned long long)columnCount;
- (const float *)rawData;

@end

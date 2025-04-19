@class NSError, SLSScreenTelemetryResultsSnapshotDataWrapper, SLScreenTelemetryConnection;

@interface SLSScreenTelemetryUpdate : NSObject

@property (readonly, nonatomic) unsigned int action;
@property (readonly, retain, nonatomic) SLScreenTelemetryConnection *connection;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) SLSScreenTelemetryResultsSnapshotDataWrapper *snapshot;

+ (id)updateWithAction:(unsigned int)a0 connection:(id)a1 error:(id)a2 andSnapshot:(id)a3;

- (void)dealloc;
- (id)initWithAction:(unsigned int)a0 connection:(id)a1 error:(id)a2 andSnapshot:(id)a3;

@end

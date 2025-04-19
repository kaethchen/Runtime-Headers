@class NSArray, CPLDiffTracker;

@interface CPLRecordChangeDiffTracker : NSObject {
    CPLDiffTracker *_diffTracker;
    unsigned long long _trackingChangeType;
}

@property (readonly, nonatomic) NSArray *updatedProperties;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithTrackingChangeTypeMask:(unsigned long long)a0;
- (void)withTrackerForChangeType:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)areObjectsDifferentOnProperty:(id)a0 changeType:(unsigned long long)a1;

@end

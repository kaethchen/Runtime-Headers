@class NSMutableArray;
@protocol MTPageEventHandlerDelegate;

@interface MTPageEventHandler : MTStandardEventHandler

@property (retain) NSMutableArray *trackedPageHistory;
@property (weak) id<MTPageEventHandlerDelegate> delegate;

- (void).cxx_destruct;
- (id)eventType;
- (id)knownFields;
- (void)didCreateMetricsData:(id)a0;
- (id)eventVersion:(id)a0;
- (id)pageHistory:(id)a0;
- (void)updatePageHistoryWithPage:(id)a0;

@end

@class NSTimer, WBSQueryParameterFilteringData;
@protocol WBSQueryParameterFilteringDataQueueDelegate;

@interface WBSQueryParameterFilteringDataQueue : NSObject {
    WBSQueryParameterFilteringData *_pendingData;
    NSTimer *_mergePendingDataTimer;
}

@property (readonly, nonatomic) WBSQueryParameterFilteringData *currentData;
@property (weak, nonatomic) id<WBSQueryParameterFilteringDataQueueDelegate> delegate;

- (void).cxx_destruct;
- (void)_cancelMergingPendingData;
- (void)_mergePendingData;
- (void)_mergePendingDataSoon;
- (void)addPendingDataWithAdjustedURL:(id)a0 originalURL:(id)a1;
- (void)clearPendingData;
- (void)commitPendingData;
- (void)transferPendingDataToQueue:(id)a0;

@end

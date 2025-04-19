@class NSString, NSMutableArray, NSMutableDictionary;

@interface IFInstallQueue : NSObject {
    NSString *_queueDescription;
    NSString *_extraInfo;
    int _currentElementIndex;
    id _sessionID;
    NSMutableArray *_elements;
    NSMutableDictionary *_typeStats;
    id _clientMessagingDelegate;
    double _initialEstimatedTotalTime;
    double _timeForCompletedElements;
    double _totalProgress;
    double _lastProgress;
    BOOL _messageTimeEstimatedBasedProgress;
}

- (void)dealloc;
- (int)count;
- (id)elementAtIndex:(int)a0;
- (void)addElement:(id)a0;
- (BOOL)shouldContinue;
- (id)sessionID;
- (id)initWithSession:(id)a0;
- (id)extraInfo;
- (void)setExtraInfo:(id)a0;
- (id)queueDescription;
- (void)_collectPerformanceWithElement:(id)a0;
- (void)analyzeProgress;
- (void)sendClientStatusMessage:(id)a0 ofType:(id)a1;
- (id)_typeStats;
- (void)addElement:(id)a0 withType:(id)a1;
- (id)advanceToNextElement;
- (id)currentElement;
- (void)distributeProgress:(double)a0 forType:(id)a1;
- (void)distributeProgressWithTimeEstimates;
- (void)dumpPerformanceWithIndentLevel:(int)a0 withStatus:(long long)a1;
- (void)dumpTypeStats;
- (int)indexOfCurrentElement;
- (double)initialEstimatedTotalTime;
- (void)sendClientError:(id)a0;
- (void)setClientMessagingDelegate:(id)a0;
- (void)setPartialProgress:(double)a0;
- (void)setQueueDescription:(id)a0;
- (id)typeStats;

@end

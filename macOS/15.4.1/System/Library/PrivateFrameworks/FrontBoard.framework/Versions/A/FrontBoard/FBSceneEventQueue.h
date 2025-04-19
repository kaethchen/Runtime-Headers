@protocol FBSceneEventQueueDelegate;

@interface FBSceneEventQueue : BSEventQueue

@property (weak, nonatomic) id<FBSceneEventQueueDelegate> delegate;

- (void).cxx_destruct;
- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidUnlock;
- (void)_noteWillExecuteEvent:(id)a0;

@end

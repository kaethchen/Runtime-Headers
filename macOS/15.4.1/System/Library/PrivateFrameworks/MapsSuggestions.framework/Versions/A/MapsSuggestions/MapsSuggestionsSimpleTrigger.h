@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (void)fire;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;

@end

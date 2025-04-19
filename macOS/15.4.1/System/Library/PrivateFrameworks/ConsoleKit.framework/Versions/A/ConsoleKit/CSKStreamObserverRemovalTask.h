@interface CSKStreamObserverRemovalTask : CSKStreamObserverTask

+ (id)name;

- (void)notifyObserverForObserverDataBatch:(id)a0;
- (BOOL)skipsFiltering;

@end

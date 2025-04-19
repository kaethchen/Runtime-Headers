@interface _CNObservableCompletionEvent : CNObservableEvent

- (BOOL)isEqual:(id)a0;
- (id)error;
- (id)value;
- (unsigned long long)eventType;
- (BOOL)hasValue;
- (void)dematerializeWithObserver:(id)a0;

@end

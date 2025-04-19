@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)error;
- (id)value;
- (id)initWithError:(id)a0;
- (unsigned long long)eventType;
- (BOOL)hasValue;
- (void)dematerializeWithObserver:(id)a0;

@end

@interface _NSPlaceholderObservation : NSObservation

- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (id)initWithObservable:(id)a0 observer:(id)a1;

@end

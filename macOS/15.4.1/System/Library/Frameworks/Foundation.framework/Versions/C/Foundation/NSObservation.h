@interface NSObservation : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)a0;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (void)remove;

@end

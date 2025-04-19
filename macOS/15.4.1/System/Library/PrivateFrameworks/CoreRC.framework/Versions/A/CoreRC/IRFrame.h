@interface IRFrame : NSObject {
    unsigned int *_timings;
}

@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long timestamp;

- (void)dealloc;
- (void)getTimings:(unsigned int *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTimings:(const unsigned int *)a0 count:(unsigned long long)a1 timestamp:(unsigned long long)a2;
- (unsigned int)timeIntervalAtIndex:(unsigned long long)a0;

@end

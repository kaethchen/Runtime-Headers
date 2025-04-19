@interface IKCacheFragHandler_Hole : NSObject {
    unsigned long long _start;
    unsigned long long _len;
}

+ (id)holeWithStart:(unsigned long long)a0 len:(unsigned long long)a1;

- (unsigned long long)start;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)len;
- (id)initWithStart:(unsigned long long)a0 len:(unsigned long long)a1;
- (void)setStart:(unsigned long long)a0 len:(unsigned long long)a1;

@end

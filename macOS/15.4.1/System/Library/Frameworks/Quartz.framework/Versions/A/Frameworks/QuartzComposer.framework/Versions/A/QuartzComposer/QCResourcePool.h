@interface QCResourcePool : QCCache {
    void *_unused2[4];
}

- (BOOL)isEmpty;
- (id)initWithMaximumSize:(double)a0 maximumResourceAge:(double)a1 options:(id)a2;

@end

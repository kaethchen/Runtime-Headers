@interface QLCGWindowEffect : QLWindowEffect {
    unsigned int _cid;
    float _duration;
}

- (void)invoke;
- (id)initWithWindow:(id)a0 parameters:(struct _CGSTransitionParams { int x0; unsigned int x1; unsigned int x2; unsigned int x3; float *x4; })a1 duration:(double)a2;

@end

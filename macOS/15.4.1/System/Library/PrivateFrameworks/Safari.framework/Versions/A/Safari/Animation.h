@interface Animation : NSAnimation {
    id /* block */ _progressHandler;
}

- (void).cxx_destruct;
- (id)initWithDuration:(double)a0 animationCurve:(unsigned long long)a1 progressHandler:(id /* block */)a2;
- (void)setCurrentProgress:(float)a0;

@end

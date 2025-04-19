@interface CoreHapticsTools.CHTHapticLayer : CoreHapticsTools.CHTLayer {
    void /* unknown type, empty encoding */ timeDomainParameterPointsForTransientEvents;
    void /* unknown type, empty encoding */ contextSizedPathsForTransientEvents;
    void /* unknown type, empty encoding */ timeTransientEventsProcessingQueue;
    void /* unknown type, empty encoding */ transientEventPathProcessingQueue;
    void /* unknown type, empty encoding */ timeDomainParameterPointsForContinuousEvents;
    void /* unknown type, empty encoding */ contextSizedPathsForContinuousEvents;
    void /* unknown type, empty encoding */ timeContinuousEventsProcessingQueue;
    void /* unknown type, empty encoding */ continuousEventPathProcessingQueue;
    void /* unknown type, empty encoding */ paramTypeForLayer;
    void /* unknown type, empty encoding */ topBarMultiplier;
    void /* unknown type, empty encoding */ transientColor;
    void /* unknown type, empty encoding */ continuousColor;
    void /* unknown type, empty encoding */ pathDrawingMode;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;

@end

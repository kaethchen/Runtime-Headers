@interface XQueryAxisStep : XQueryStep {
    long long _axis;
}

+ (id)axisStepWithAxis:(long long)a0 nodeTest:(id)a1;

- (long long)axis;
- (void)bindInfoForProlog:(id)a0;
- (id)initWithAxis:(long long)a0 nodeTest:(id)a1;
- (BOOL)isValid:(id)a0 expr:(id)a1 context:(id)a2;
- (void)processItems:(id)a0 toResults:(id)a1 forContext:(id)a2 validate:(BOOL)a3;

@end

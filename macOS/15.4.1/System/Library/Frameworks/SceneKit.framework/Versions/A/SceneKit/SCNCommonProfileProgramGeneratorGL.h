@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator {
    int _profile;
}

- (id)init;
- (id)initWithProfile:(int)a0;
- (int)profile;
- (struct __C3DFXProgram { } *)_newProgramWithHashCode:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(struct { long long x0; struct *x1; struct { long long x0; long long x1; } x2[4]; struct { long long x0; long long x1; } x3[4]; long long x4[4]; void *x5; void *x6; BOOL x7; } *)a2;

@end

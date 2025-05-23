@class NSString;

@interface ADDynamicPolynomialsLensDistortionModel : ADPolynomialsLensDistortionModel <ADLensDistortionModel> {
    struct ADDistortionPolynomials { float forwardOrders[8]; float inverseOrders[8]; } _polynomialsBase;
    struct ADDistortionPolynomials { float forwardOrders[8]; float inverseOrders[8]; } _polynomialsDynamic;
}

@property (nonatomic) float dynamicFactor;
@property (nonatomic) const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *distortionPolynomialsBase;
@property (nonatomic) const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *distortionPolynomialsDynamic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 dynFactor:(float)a1 polynomialsBase:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a2 polynomialsDynamic:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a3;
- (void)setDistortionPolynomials:(const struct ADDistortionPolynomials { float x0[8]; float x1[8]; } *)a0;
- (void)updatePolynomials;

@end

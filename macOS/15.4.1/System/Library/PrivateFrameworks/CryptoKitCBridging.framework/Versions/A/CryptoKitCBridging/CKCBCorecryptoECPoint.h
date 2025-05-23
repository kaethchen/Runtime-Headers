@interface CKCBCorecryptoECPoint : NSObject

@property (readonly, nonatomic) struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *group;
@property (readonly, nonatomic) struct ccec_affine_point { unsigned long long x0[1]; } *point;

+ (unsigned long long)compressedx962PointByteCountForCurveParameters:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *)a0;
+ (unsigned long long)groupOrderByteCountForCP:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithPublicKey:(struct ccec_pub_ctx { struct ccec_cp *x0; struct ccec_projective_point { unsigned long long x0[1]; } x1[0]; } *)a0;
- (id)add:(id)a0 corecryptoError:(int *)a1;
- (id)initFromPublicKeyBytes:(id)a0 inGroup:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *)a1 compressed:(BOOL)a2 corecryptoError:(int *)a3;
- (id)initPoint:(struct ccec_affine_point { unsigned long long x0[1]; } *)a0 onGroup:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *)a1;
- (id)initWithGeneratorForCP:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *)a0;
- (id)multiply:(id)a0 corecryptoError:(int *)a1;
- (unsigned long long)pointAllocationSizeForGroup:(struct ccec_cp { unsigned long long x0; unsigned long long x1; struct cczp_funcs *x2; unsigned long long x3[1]; } *)a0;
- (id)serializedPublicKey:(BOOL)a0;
- (id)sub:(id)a0 corecryptoError:(int *)a1;

@end

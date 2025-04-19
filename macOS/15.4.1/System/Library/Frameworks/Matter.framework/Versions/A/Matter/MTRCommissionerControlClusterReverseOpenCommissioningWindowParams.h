@class NSNumber, NSData;

@interface MTRCommissionerControlClusterReverseOpenCommissioningWindowParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *commissioningTimeout;
@property (copy, nonatomic) NSData *pakePasscodeVerifier;
@property (copy, nonatomic) NSNumber *discriminator;
@property (copy, nonatomic) NSNumber *iterations;
@property (copy, nonatomic) NSData *salt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;

@end

@class NSNumber, NSData;

@interface MTRDoorLockClusterGetCredentialStatusResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *credentialExists;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *creatorFabricIndex;
@property (copy, nonatomic) NSNumber *lastModifiedFabricIndex;
@property (copy, nonatomic) NSNumber *nextCredentialIndex;
@property (copy, nonatomic) NSData *credentialData;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;

@end

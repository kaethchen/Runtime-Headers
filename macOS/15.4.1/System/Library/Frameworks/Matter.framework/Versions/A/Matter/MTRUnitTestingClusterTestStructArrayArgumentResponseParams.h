@class NSArray, NSNumber;

@interface MTRUnitTestingClusterTestStructArrayArgumentResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *arg1;
@property (copy, nonatomic) NSArray *arg2;
@property (copy, nonatomic) NSArray *arg3;
@property (copy, nonatomic) NSArray *arg4;
@property (copy, nonatomic) NSNumber *arg5;
@property (copy, nonatomic) NSNumber *arg6;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;

@end

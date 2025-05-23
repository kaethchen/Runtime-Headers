@class NSNumber;

@interface MTRUnitTestingClusterTestEmitTestEventResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned long long x0; } *)a0;

@end

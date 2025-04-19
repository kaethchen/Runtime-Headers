@class NSNumber, MTRDataTypeTestGlobalStruct;

@interface MTRUnitTestingClusterGlobalEchoResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRDataTypeTestGlobalStruct *field1;
@property (copy, nonatomic) NSNumber *field2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;

@end

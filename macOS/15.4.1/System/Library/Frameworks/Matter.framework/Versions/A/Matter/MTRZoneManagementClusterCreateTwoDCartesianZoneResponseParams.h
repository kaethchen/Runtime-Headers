@class NSNumber;

@interface MTRZoneManagementClusterCreateTwoDCartesianZoneResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zoneID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned short x0; } *)a0;

@end

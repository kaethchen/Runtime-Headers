@class NSString, MTRDataTypeLocationDescriptorStruct, NSNumber;

@interface MTREcosystemInformationClusterEcosystemLocationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *uniqueLocationID;
@property (copy, nonatomic) MTRDataTypeLocationDescriptorStruct *locationDescriptor;
@property (copy, nonatomic) NSNumber *locationDescriptorLastEdit;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

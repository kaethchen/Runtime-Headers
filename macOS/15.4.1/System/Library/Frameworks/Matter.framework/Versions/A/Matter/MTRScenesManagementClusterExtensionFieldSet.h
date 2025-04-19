@class NSNumber, NSArray;

@interface MTRScenesManagementClusterExtensionFieldSet : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSArray *attributeValueList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

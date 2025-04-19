@class NSNumber, NSString, NSArray;

@interface MTRScenesManagementClusterViewSceneResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSNumber *sceneID;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSArray *extensionFieldSets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;

@end

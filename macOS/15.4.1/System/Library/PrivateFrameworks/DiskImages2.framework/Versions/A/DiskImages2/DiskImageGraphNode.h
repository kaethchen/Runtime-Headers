@class NSString, NSUUID, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface DiskImageGraphNode : NSObject

@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSUUID *parentUUID;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL isCache;
@property (retain, nonatomic) NSMutableDictionary *pstackDict;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) DiskImageGraphNode *parent;

+ (id)GraphNodeWithDictionary:(id)a0 updateChangesToDict:(BOOL)a1 workDir:(id)a2 error:(id *)a3;
+ (BOOL)validateWithDictionary:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)URL;
- (id)getChildren;
- (id)toDictionary;
- (void)addDecendantsToArray:(id)a0;
- (id)childrenInfoWithExtra:(BOOL)a0 error:(id *)a1;
- (BOOL)deleteImage;
- (id)getDescendants;
- (id)infoWithExtra:(BOOL)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 updateChangesToDict:(BOOL)a1 workDir:(id)a2 error:(id *)a3;
- (id)initWithTag:(id)a0 UUID:(id)a1 parentNode:(id)a2 metadata:(id)a3 isCache:(BOOL)a4;
- (id)recursiveInfoWithExtra:(BOOL)a0 error:(id *)a1;
- (id)toDIShadowNode;
- (BOOL)validateAppendedImageWithInfo:(id)a0 error:(id *)a1;

@end

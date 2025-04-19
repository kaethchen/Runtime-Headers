@class PHAssetComment;

@interface PHAssetCommentCreationRequest : PHChangeRequest

@property (retain, nonatomic) PHAssetComment *comment;

+ (id)changeRequestForAssetComment:(id)a0;
+ (id)creationRequestForAssetCommentLike;
+ (id)creationRequestForAssetCommentWithText:(id)a0;

- (void).cxx_destruct;
- (void)setCommentText:(id)a0;
- (id)commentText;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)isLike;
- (id)managedEntityName;
- (id)placeholderForCreatedAssetComment;
- (void)setIsLike:(id)a0;

@end

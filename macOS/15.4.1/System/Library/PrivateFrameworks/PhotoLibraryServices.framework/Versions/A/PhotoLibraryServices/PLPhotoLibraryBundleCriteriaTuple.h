@class PLPhotoLibraryBundle, PLBackgroundJobCriteria;

@interface PLPhotoLibraryBundleCriteriaTuple : NSObject

@property (readonly, nonatomic) PLPhotoLibraryBundle *bundle;
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0 withCriteria:(id)a1;

@end

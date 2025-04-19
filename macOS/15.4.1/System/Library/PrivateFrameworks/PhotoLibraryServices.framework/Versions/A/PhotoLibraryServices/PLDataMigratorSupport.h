@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0;
- (void)recordDataMigrationInfo:(id)a0;

@end

@class NSString, NSProgress, PLFileBackedLogger, NSMutableArray, PLLazyObject;
@protocol PLModelMigrationContext;

@interface PLBackgroundModelMigration : NSObject <NSProgressReporting> {
    id<PLModelMigrationContext> _internalMigrationContext;
    NSMutableArray *_actionsBackground;
    unsigned long long _actionProgressPortionBackground;
    PLLazyObject *_lazyAppPrivateData;
}

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PLFileBackedLogger *logger;
@property (retain, nonatomic) NSString *migrationUUID;
@property (copy) id /* block */ continuationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasCompletedBackgroundActionClass:(Class)a0 pathManager:(id)a1;
+ (BOOL)isBackgroundMigrationRegistrationAfterRebuildRequiredWithLibrary:(id)a0;
+ (BOOL)isCompletedBackgroundActionClass:(Class)a0 appPrivateData:(id)a1;
+ (long long)migrateBackgroundActionsWithPhotoLibraryBundle:(id)a0 logger:(id)a1 error:(id *)a2 continuationHandler:(id /* block */)a3;
+ (BOOL)resetBackgroundActionClass:(Class)a0 pathManager:(id)a1 error:(id *)a2;
+ (void)validateBackgroundActionClass:(Class)a0;

- (void).cxx_destruct;
- (long long)libraryIdentifier;
- (id)databaseContext;
- (id)appPrivateData;
- (id)pathManager;
- (id)analyticsEventManager;
- (id)initBackgroundMigrationWithPhotoLibraryBundle:(id)a0 logger:(id)a1 continuationHandler:(id /* block */)a2;
- (BOOL)isMigrationCancelledWithError:(id *)a0;
- (long long)migrateBackgroundPostProcessingWithError:(id *)a0;
- (id)migrationContext;
- (void)registerBackgroundActionClass:(Class)a0 onCondition:(BOOL)a1;
- (long long)runBackgroundMigrationAction:(id)a0 error:(id *)a1;
- (void)setMarkerForBackgroundAction:(id)a0 marker:(long long)a1;

@end

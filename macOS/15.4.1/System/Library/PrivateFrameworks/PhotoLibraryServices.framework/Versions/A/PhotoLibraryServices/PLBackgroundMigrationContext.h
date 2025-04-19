@class PLLazyObject, PLModelMigrationHistory, PLDatabaseContext, PLCoreAnalyticsEventManager, PLPhotoLibraryPathManager, PLGraphCache, NSString;

@interface PLBackgroundMigrationContext : NSObject <PLModelMigrationContext> {
    PLLazyObject *_lazyModelMigrationHistory;
}

@property (retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (retain, nonatomic) PLDatabaseContext *databaseContext;
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property unsigned int policy;
@property long long libraryIdentifier;
@property (retain) PLGraphCache *graphCache;
@property (readonly) PLModelMigrationHistory *modelMigrationHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

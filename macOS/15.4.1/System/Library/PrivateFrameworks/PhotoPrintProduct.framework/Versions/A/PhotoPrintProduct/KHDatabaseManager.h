@class NSObject, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface KHDatabaseManager : NSObject {
    NSObject<OS_dispatch_queue> *_databaseManagerThemeQueue;
    NSObject<OS_dispatch_queue> *_databaseManagerProjectQueue;
}

@property (readonly) NSMutableDictionary *projectDatabasePaths;
@property (readonly) NSMutableDictionary *openProjectDatabases;
@property (readonly) NSMutableDictionary *openThemeDatabases;
@property (readonly) NSMutableSet *transientThemeDatabases;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_applicationWillTerminate:(id)a0;
- (id)_themeDBForURL:(id)a0;
- (void)_closeThemeDBForKey:(id)a0;
- (void)closeProjectDBForURL:(id)a0;
- (void)closeProjectDBForURL:(id)a0 context:(id)a1;
- (void)closeProjectDBForUuid:(id)a0;
- (void)closeProjectDBForUuid:(id)a0 context:(id)a1;
- (void)closeThemeDBForModel:(id)a0;
- (void)closeTransientThemeDB:(id)a0;
- (id)localThemeForThemeIdentifier:(id)a0;
- (id)projectDBForURL:(id)a0;
- (id)projectDBForURL:(id)a0 context:(id)a1;
- (id)projectDBForUuid:(id)a0;
- (id)projectDBForUuid:(id)a0 context:(id)a1;
- (void)requestThemeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestThemeWithIdentifier:(id)a0 downloadHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)resetThemeDBForModel:(id)a0;
- (id)themeBundlePathForModel:(id)a0;
- (id)themeDBForModel:(id)a0;
- (id)themeDBForURL:(id)a0;

@end

@class NSString;

@interface PKInstallHistory : NSObject {
    NSString *_path;
}

+ (id)defaultHistory;
+ (id)_errorWithCode:(long long)a0 posixErrno:(int)a1;
+ (id)historyOnVolume:(id)a0;

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)installedItems;
- (BOOL)_openInstallHistoryWithItems:(id)a0 returningError:(id *)a1;
- (BOOL)_renameInstallHistoryAtDir:(int)a0 fileName:(char *)a1 returningError:(out id *)a2;
- (BOOL)addInstallRequest:(id)a0;
- (BOOL)recordInstall:(id)a0;
- (BOOL)recordInstall:(id)a0 returningError:(id *)a1;

@end

@class NSString, _PASLock, GDXPCViewService;

@interface GDRemoteViewAccessRequester : NSObject <GDViewAccessRequester, GDViewErrorReporter> {
    _PASLock *_lock;
    GDXPCViewService *_xpcService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentProcessIsSandboxed;
+ (unsigned long long)_machTimeToMilliseconds:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_requestAssertionForViewName:(id)a0 useCase:(id)a1 error:(id *)a2;
- (BOOL)reportSQLiteError:(id)a0 sqliteErrorCode:(long long)a1 error:(id *)a2;
- (BOOL)reportSQLiteError:(id)a0 sqliteErrorCode:(long long)a1 useCase:(id)a2 error:(id *)a3;
- (BOOL)reportUnknownError:(id)a0 error:(id *)a1;
- (BOOL)reportUnknownError:(id)a0 useCase:(id)a1 error:(id *)a2;
- (id)requestAssertionForViewName:(id)a0 error:(id *)a1;
- (id)requestAssertionForViewName:(id)a0 useCase:(id)a1 error:(id *)a2;
- (id)requestInfoForViewName:(id)a0 useCase:(id)a1 error:(id *)a2;

@end

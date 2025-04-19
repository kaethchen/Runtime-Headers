@interface IntelligencePlatform.RemoteViewAccessRequester : NSObject <GDViewAccessRequester, GDViewErrorReporter> {
    void /* unknown type, empty encoding */ remoteAccessRequester;
    void /* unknown type, empty encoding */ useCase;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)reportSQLiteError:(id)a0 sqliteErrorCode:(long long)a1 error:(id *)a2;
- (BOOL)reportUnknownError:(id)a0 error:(id *)a1;
- (id)requestAssertionForViewName:(id)a0 error:(id *)a1;

@end

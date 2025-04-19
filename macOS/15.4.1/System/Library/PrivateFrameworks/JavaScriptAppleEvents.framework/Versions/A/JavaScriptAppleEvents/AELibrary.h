@interface AELibrary : AEScriptableEntity {
    struct ComponentInstanceRecord { long long x0[1]; } *componentInstance;
    unsigned int scriptID;
}

+ (id)libraryWithPath:(id)a0 context:(id)a1 errorMessage:(id *)a2;

- (id)emptyAppleEventWithEventClass:(unsigned int)a0 eventID:(unsigned int)a1;
- (id)getErrorFromContext:(id)a0;
- (id)initWithPath:(id)a0 context:(id)a1 errorMessage:(id *)a2;
- (id)sendAppleEvent:(id)a0 timeout:(long long)a1 withContext:(id)a2 waitForReply:(BOOL)a3 error:(id *)a4;
- (id)sendAppleEvent:(id)a0 withContext:(id)a1 waitForReply:(BOOL)a2 error:(id *)a3;
- (void)setActiveProc:(void /* function */ *)a0 withRefCon:(void *)a1;
- (void)setSendProc:(void /* function */ *)a0 withRefCon:(void *)a1;

@end

@class KTAccountPublicID;

@interface TransparencyStaticKey : NSObject

@property (copy) KTAccountPublicID *accountIdentity;

+ (void)sasTTR:(id)a0 toHandle:(id)a1 pushToken:(id)a2 complete:(id /* block */)a3;

- (void).cxx_destruct;
- (void)listKTSessions:(id /* block */)a0;
- (void)deleteKTSession:(id)a0 complete:(id /* block */)a1;
- (void)getKTSessionByHandle:(id)a0 complete:(id /* block */)a1;
- (void)getKTSessionByID:(id)a0 complete:(id /* block */)a1;
- (void)setupKTSession:(id)a0 complete:(id /* block */)a1;
- (void)transparencyHaveContact:(id)a0 complete:(id /* block */)a1;

@end

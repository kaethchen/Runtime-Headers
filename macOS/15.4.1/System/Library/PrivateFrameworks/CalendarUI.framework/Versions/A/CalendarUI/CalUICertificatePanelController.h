@interface CalUICertificatePanelController : NSObject

+ (id)sharedController;

- (BOOL)showCertificatePanelForError:(id)a0 andRefreshSourceIfUserAcceptsCert:(id)a1;
- (BOOL)showCertificatePanelForError:(id)a0;
- (BOOL)showCertificatePanelForError:(id)a0 andRefreshSourceIfUserAcceptsCert:(id)a1 completion:(id /* block */)a2;
- (BOOL)showCertificatePanelForError:(id)a0 forAccountID:(id)a1 refreshEventStoreIfUserAcceptsCert:(id)a2 completion:(id /* block */)a3;

@end

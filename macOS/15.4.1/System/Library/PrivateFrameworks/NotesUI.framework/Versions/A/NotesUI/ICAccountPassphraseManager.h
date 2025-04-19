@class ICAccount, NSWindow;

@interface ICAccountPassphraseManager : NSObject

@property (readonly, nonatomic) ICAccount *account;
@property (weak, nonatomic) NSWindow *window;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (BOOL)removePassphrase;
- (BOOL)setPassphrase:(id)a0 hint:(id)a1;
- (void)changePassphrase:(id)a0 toPassphrase:(id)a1 hint:(id)a2 completion:(id /* block */)a3;
- (BOOL)setPassphrase:(id)a0 hint:(id)a1 isReset:(BOOL)a2;
- (void)updateDivergedNotesFromPassphrase:(id)a0 toAccountPassphrase:(id)a1 completion:(id /* block */)a2;
- (void)updateDivergedNotesWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end

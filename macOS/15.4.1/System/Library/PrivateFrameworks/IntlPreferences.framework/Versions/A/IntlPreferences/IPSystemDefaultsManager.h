@class SFAuthorization;

@interface IPSystemDefaultsManager : NSObject

@property (retain, nonatomic) SFAuthorization *authorization;

+ (BOOL)isSingleUserSystem;
+ (id)sharedDefaultsManager;

- (void).cxx_destruct;
- (void)setSystemLanguages:(id)a0 locale:(id)a1 isRightToLeft:(BOOL)a2 interactionAllowed:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)updateNVRAM;
- (void)updatePreboot;
- (void)updatePrebootViaAdmin;

@end

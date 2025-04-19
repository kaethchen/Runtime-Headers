@interface VUIPlaybackErrorMessage : NSObject

+ (id)sharedInstance;

- (id)_getLanguageCode;
- (id)_getSessionInfoFor:(id)a0 andMode:(id)a1;
- (void)getLocalizedErrorMessageFor:(id)a0 withPlaybackMode:(id)a1 withError:(id)a2 completion:(id /* block */)a3;

@end

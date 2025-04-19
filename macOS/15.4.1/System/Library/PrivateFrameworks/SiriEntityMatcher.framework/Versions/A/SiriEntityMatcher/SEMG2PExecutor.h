@class NSString, _EARUserProfileBuilder;

@interface SEMG2PExecutor : NSObject

@property (readonly, nonatomic) NSString *locale;
@property (readonly) BOOL isJit;
@property (readonly, nonatomic) _EARUserProfileBuilder *user_profile;

- (void).cxx_destruct;
- (id)pronunciationsForOrthography:(id)a0;
- (id)getAssetPath;
- (id)initWithLocale:(id)a0 isJit:(BOOL)a1;
- (void)setupUserProfile;

@end

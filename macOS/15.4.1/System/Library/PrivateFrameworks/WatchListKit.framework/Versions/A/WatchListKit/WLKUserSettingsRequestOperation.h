@class NSString, WLKUserSettings;

@interface WLKUserSettingsRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) WLKUserSettings *userSettings;
@property (readonly, copy, nonatomic) NSString *caller;
@property (readonly, nonatomic) WLKUserSettings *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)_initWithAction:(unsigned long long)a0 userSettings:(id)a1 caller:(id)a2 dsid:(id)a3 isMigration:(BOOL)a4;
- (id)initWithAction:(unsigned long long)a0 userSettings:(id)a1;
- (id)initWithAction:(unsigned long long)a0 userSettings:(id)a1 caller:(id)a2;
- (id)initWithAction:(unsigned long long)a0 userSettings:(id)a1 dsid:(id)a2 isMigration:(BOOL)a3;

@end

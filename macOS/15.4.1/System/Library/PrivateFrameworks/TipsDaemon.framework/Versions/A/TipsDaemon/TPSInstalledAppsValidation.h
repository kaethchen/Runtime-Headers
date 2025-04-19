@class TPSInstalledAppInfo;

@interface TPSInstalledAppsValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSInstalledAppInfo *appInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInstalledAppInfo:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end

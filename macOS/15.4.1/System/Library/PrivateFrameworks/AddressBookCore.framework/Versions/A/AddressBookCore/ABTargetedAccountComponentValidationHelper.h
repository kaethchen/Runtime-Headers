@class NSString, ABAccountComponents, NSDictionary;

@interface ABTargetedAccountComponentValidationHelper : NSObject <ABAccountComponentValidationHelper> {
    ABAccountComponents *_components;
    NSDictionary *_config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void).cxx_destruct;
- (id)className;
- (id)accountName;
- (id)initWithAccountComponents:(id)a0;
- (BOOL)isAccountComponentsValid;
- (void)loadConfig;

@end

@class NSDictionary, NSString, ABUserDefaults;

@interface ABUserDefaultsCNAdapter : NSObject <CNFoundationUserDefaults> {
    ABUserDefaults *_userDefaults;
}

@property BOOL preferNickname;
@property unsigned long long nameOrder;
@property unsigned long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) NSDictionary *filteredAccountsAndContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterWithUserDefaults:(id)a0;

- (void).cxx_destruct;
- (id)countryCode;
- (unsigned long long)sortOrder;
- (unsigned long long)newContactNameOrder;
- (id)initWithUserDefaults:(id)a0;

@end

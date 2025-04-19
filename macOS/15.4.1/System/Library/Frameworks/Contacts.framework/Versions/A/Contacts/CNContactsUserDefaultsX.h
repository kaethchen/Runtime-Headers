@class CNFoundationUserDefaults;

@interface CNContactsUserDefaultsX : CNContactsUserDefaults

@property (retain) CNFoundationUserDefaults *foundationUserDefaults;

- (id)init;
- (void).cxx_destruct;
- (id)countryCode;
- (long long)shortNameFormat;
- (void)setShortNameFormat:(long long)a0;
- (long long)sortOrder;
- (BOOL)isShortNameFormatEnabled;
- (void)setShortNameFormatEnabled:(BOOL)a0;
- (id)initWithFoundationUserDefaults:(id)a0;
- (BOOL)shortNameFormatPrefersNicknames;
- (long long)displayNameOrder;
- (id)filteredGroupAndContainerIDs;
- (long long)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(long long)a0;
- (void)setFilteredGroupAndContainerIDs:(id)a0;
- (void)setShortNameFormatPrefersNicknames:(BOOL)a0;

@end

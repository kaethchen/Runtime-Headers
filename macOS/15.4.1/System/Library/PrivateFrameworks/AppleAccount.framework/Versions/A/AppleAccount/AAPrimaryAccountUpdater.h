@class ACAccount;

@interface AAPrimaryAccountUpdater : AAVersionUpdater <AADataclassVersionUpdateProtocol> {
    ACAccount *_appleAccount;
}

+ (id)orderedVersions;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (BOOL)performVersionUpdate0ToVersion1;
- (BOOL)performVersionUpdate1ToVersion2;

@end

@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface CredentialAndProtectionSpaceCollection : NSObject <CredentialAndProtectionSpaceCollection>

@property (retain, nonatomic) NSDictionary *credentialsByProtectionSpace;
@property (retain, nonatomic) NSMutableArray *credentialAndProtectionSpacePairs;
@property (retain, nonatomic) NSMutableArray *filteredCredentialAndProtectionSpacePairIndexes;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) NSString *filterString;
@property (nonatomic) BOOL ignoreNotifications;
@property (readonly, nonatomic, getter=credentialAndProtectionSpacePairsCount) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setCredential:(id)a0 forProtectionSpace:(id)a1;
- (void)credentialsChanged:(id)a0;
- (void)_populateCredentialsWithOptions:(unsigned long long)a0;
- (unsigned long long)_realIndexToPossiblyFilteredIndex:(unsigned long long)a0;
- (void)_removeCredential:(id)a0 forProtectionSpace:(id)a1;
- (id)addressStringForProtectionSpaceAtIndex:(unsigned long long)a0;
- (id)credentialAndProtectionSpaceAtIndex:(unsigned long long)a0;
- (id)credentialAtIndex:(unsigned long long)a0;
- (BOOL)includesPasswordInSortCriteria;
- (unsigned long long)indexOfCredentialAndProtectionSpace:(id)a0;
- (unsigned long long)possiblyFilteredIndexToRealIndex:(unsigned long long)a0;
- (id)protectionSpaceAtIndex:(unsigned long long)a0;
- (void)removeAllCredentials;
- (void)removeCredentialAndProtectionSpace:(id)a0;
- (void)resetCredentialsWithOptions:(unsigned long long)a0;
- (void)resetFilteredCredentials;
- (BOOL)shouldFilterCredentialAndProtectionSpacePairs;
- (void)sortAndFilter;
- (void)startMonitoringCredentials;
- (void)stopMonitoringCredentials;

@end

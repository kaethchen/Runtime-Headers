@class TUContactsDataProviderAppleCareHandles, NSUserDefaults, NSDate;
@protocol TUContactsDataSource;

@interface TUContactsDataProvider : NSObject

@property (nonatomic, getter=shouldUseFamilyNameFirst) BOOL useFamilyNameFirst;
@property (copy, nonatomic) id /* block */ localeSupportsPrefixHintForFetchRequest;
@property (readonly, nonatomic) id<TUContactsDataSource> contactsDataSource;
@property (copy, nonatomic) TUContactsDataProviderAppleCareHandles *appleCareHandles;
@property (copy, nonatomic) NSDate *deviceSetupDate;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic, getter=shouldUseGivenName) BOOL useGivenName;

+ (id)numberFormatter;
+ (id)unsupportedLocalesForPrefixHint;
+ (id)defaultContactKeyDescriptors;
+ (id)familyNameFirstLocaleCountryCodes;
+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0;
- (id)nameForContact:(id)a0;
- (id)ISOCountryCodeForHandle:(id)a0 fetchRequest:(id)a1;
- (id)unifiedContactsForFetchRequest:(id)a0;
- (id)compositeNameForContacts:(id)a0;
- (id)compositeNameForFetchRequest:(id)a0;
- (id)contactLabelForContacts:(id)a0 matchingHandle:(id)a1 countryCode:(id)a2;
- (id)contactWithIdentifier:(id)a0 keysToFetch:(id)a1;
- (id)contactsForHandle:(id)a0 countryCode:(id)a1 keysToFetch:(id)a2 prefixHint:(id)a3;
- (id)executeBatchFetchRequests:(id)a0;
- (id)formattedNameForHandle:(id)a0 countryCode:(id)a1;
- (id)getDeviceSetupDate;
- (id)initWithContactsDataSource:(id)a0;
- (BOOL)isHandleEligibleForScreenSharingRequests:(id)a0;
- (id)labeledHandlesForContactWithIdentifier:(id)a0;
- (id)labeledHandlesForContacts:(id)a0;
- (id)localizedCompositeNameForContact:(id)a0 secondContact:(id)a1;
- (id)prefixHintForFetchRequest:(id)a0;
- (id)processBatchFetchRequests:(id)a0;
- (id)resultForSingleHandleFetchRequest:(id)a0 fetchedContacts:(id)a1;
- (BOOL)shouldIgnoreHandle:(id)a0 withFetchRequest:(id)a1;

@end

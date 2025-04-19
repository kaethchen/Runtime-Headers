@class ATXModeAffinityModelsConstants, NSSet, MLModel, ATXContactNotificationEngagementEventProvider, CNContactStore;
@protocol ATXModeEntityEventProviderProtocol;

@interface ATXContactModeModel : NSObject {
    unsigned long long _mode;
    MLModel *_contactModeModel;
    NSSet *_cnContactIdsOfFavoriteContacts;
    NSSet *_vipContactEmailAddresses;
    NSSet *_cnContactIdsOfEmergencyContacts;
    NSSet *_cnContactIdsOfICloudFamilyMembers;
    ATXContactNotificationEngagementEventProvider *_contactNotificationEngagementEventProvider;
    id<ATXModeEntityEventProviderProtocol> _modeEventProvider;
    ATXModeAffinityModelsConstants *_modeAffinityModelsConstants;
    CNContactStore *_contactStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)contactKeysToFetch;
- (id)modelName;
- (id)scoredEntities;
- (id)meContact;
- (void)addNotificationsSignalsForIdentifier:(id)a0 toContactSpecificFeatures:(id)a1;
- (id)featuresToModel:(id)a0;
- (id)initWithMode:(unsigned long long)a0 contactStore:(id)a1;
- (id)loadContactModeModel;
- (id)purgeDeletedContacts:(id)a0;
- (double)scoreFromContactFeatures:(id)a0;

@end

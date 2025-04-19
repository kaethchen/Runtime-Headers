@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)_primaryAppleAccount;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)_imPreferredAccount;
- (id)contributorForReference:(id)a0 error:(id *)a1;
- (id)defaultContributorReference;

@end

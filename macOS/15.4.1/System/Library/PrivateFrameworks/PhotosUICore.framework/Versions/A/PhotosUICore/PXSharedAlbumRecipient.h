@class NSString, PLCloudSharedAlbumInvitationRecord, NSArray, NSNumber;

@interface PXSharedAlbumRecipient : PXRecipient <PLSSharedAlbumRecipient>

@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSNumber *stateNumber;
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) NSString *displayAddress;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *allEmailsArray;
@property (readonly, nonatomic) NSArray *allPhonesArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInvitationRecord:(id)a0;
- (id)initWithPersonID:(id)a0 firstName:(id)a1 lastName:(id)a2 fullName:(id)a3 emails:(id)a4 phones:(id)a5 state:(int)a6;
- (id)matchingContactWithKeysToFetch:(id)a0 outMatchingKey:(id *)a1 outMatchingIdentifier:(id *)a2;

@end

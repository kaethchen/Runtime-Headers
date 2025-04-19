@class NSDictionary, NSString, NSNumber;

@interface AMSFamilyMember : NSObject

@property (getter=isCurrentSignedInUser) BOOL currentSignedInUser;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, getter=isAskToBuyEnabled) BOOL askToBuyEnabled;
@property (readonly) NSString *firstName;
@property (readonly) NSNumber *iCloudDSID;
@property (readonly) NSString *iCloudUsername;
@property (readonly) NSNumber *iTunesDSID;
@property (readonly) NSString *iTunesUsername;
@property (readonly) NSString *lastName;
@property (readonly, getter=isSharingPurchases) BOOL sharingPurchases;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end

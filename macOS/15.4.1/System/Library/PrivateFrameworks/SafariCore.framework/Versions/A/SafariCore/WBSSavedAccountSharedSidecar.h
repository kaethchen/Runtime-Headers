@class NSString, NSDictionary, NSArray, NSURLProtectionSpace, WBSTOTPGenerator;

@interface WBSSavedAccountSharedSidecar : NSObject <WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar>

@property (retain, nonatomic) NSDictionary *originalKeychainDictionary;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (copy, nonatomic) NSString *customTitle;
@property (copy, nonatomic) NSString *originalContributorParticipantID;
@property (copy, nonatomic) NSString *participantIDForUserThatMovedSavedAccountToRecentlyDeleted;
@property (readonly, nonatomic) NSDictionary *prefixedSharableData;
@property (copy, nonatomic) NSArray *additionalSites;
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPersonalSidecar:(id)a0;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1 dictionaryRepresentation:(id)a2;

@end

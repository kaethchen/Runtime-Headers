@class NSDate, NSString, WBSTOTPGenerator, NSArray, NSMutableDictionary, NSDictionary, WBSFormerlySharedSavedAccountMarker, NSURLProtectionSpace, WBSPasswordWarningHideMarker;

@interface WBSSavedAccountSidecar : NSObject <WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar> {
    NSDictionary *_originalKeychainDictionary;
    NSMutableDictionary *_contextSpecificData;
}

@property (copy, nonatomic) NSString *customTitle;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (copy, nonatomic) NSDate *lastOneTimeShareDateForPasskey;
@property (readonly, nonatomic) NSDictionary *contextSpecificData;
@property (retain, nonatomic) NSDate *lastRecentlyDeletedNotificationDate;
@property (retain, nonatomic) WBSFormerlySharedSavedAccountMarker *formerlySharedSavedAccountMarker;
@property (readonly, nonatomic) NSDate *lastUsedDateAcrossAllContextsAndSites;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
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
- (BOOL)_siteIsAdditionalSite:(id)a0;
- (void)adoptSharableDataFromSharedSidecar:(id)a0;
- (id)initWithSharedSidecar:(id)a0;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1 dictionaryRepresentation:(id)a2;
- (id)lastUsedDateAcrossAllContextsForSite:(id)a0;
- (id)lastUsedDateForSite:(id)a0 inContext:(id)a1;
- (void)removeSharableData;
- (void)setLastUsedDate:(id)a0 forSite:(id)a1 inContext:(id)a2;

@end

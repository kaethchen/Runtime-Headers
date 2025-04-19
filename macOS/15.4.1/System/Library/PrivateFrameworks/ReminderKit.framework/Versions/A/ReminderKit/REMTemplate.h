@class REMResolutionTokenMap, REMStore, REMTemplatePublicLink, NSDate, REMTemplateSectionContext, REMColor, REMTemplateStorage, NSString, NSSet, NSData, REMObjectID, REMAccountCapabilities, REMListBadge;

@interface REMTemplate : NSObject <REMObjectIDProviding, REMSupportedVersionProviding>

@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (copy, nonatomic) REMTemplateStorage *storage;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *parentAccountID;
@property (readonly, nonatomic) NSString *badgeEmblem;
@property (readonly, nonatomic) REMStore *store;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMColor *color;
@property (readonly, nonatomic) REMListBadge *badge;
@property (readonly, nonatomic) BOOL showingLargeAttachments;
@property (readonly, nonatomic) NSString *sortingStyle;
@property (readonly, nonatomic) NSDate *mostRecentPublicLinkUpdateRequestDate;
@property (readonly, nonatomic) REMTemplatePublicLink *publicLink;
@property (readonly, nonatomic) BOOL isPersisted;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMTemplateSectionContext *sectionContext;
@property (readonly, nonatomic) NSSet *sectionIDsToUndelete;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)cdEntityNameForSavedAttachment;
+ (id)cdEntityNameForSavedReminder;
+ (id)newObjectIDForSavedAttachment;
+ (id)newObjectIDForSavedReminder;

- (id)debugDescription;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)remObjectID;
- (BOOL)isUnsupported;
- (id)initWithStore:(id)a0 storage:(id)a1;
- (id)optionalObjectID;

@end

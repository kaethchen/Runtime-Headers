@class NSUUID, NSString, NSURL, NSData, NSArray, NSSet;

@interface BTMItem : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    long long _flags;
    NSString *_name;
    NSString *_developerName;
    BTMItem *_container;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isDaemon;
@property (readonly) BOOL isUnknownDeveloper;
@property (readonly, nonatomic) BOOL isUnknownDeveloperRecord;
@property (copy) NSUUID *uuid;
@property (copy) NSString *identifier;
@property long long generation;
@property long long flags;
@property (retain) NSURL *url;
@property double modificationDate;
@property (copy) NSData *sha256;
@property (copy) NSString *executablePath;
@property double executableModificationDate;
@property (copy) NSArray *programArguments;
@property (copy) NSString *name;
@property (copy) NSString *developerName;
@property (getter=isEditable) BOOL editable;
@property BOOL canHide;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSArray *associatedBundleIdentifiers;
@property (copy) NSString *teamIdentifier;
@property (copy) NSData *bookmark;
@property BOOL isResolvedURLStale;
@property (weak) BTMItem *container;
@property (copy) NSSet *embeddedItems;
@property (readonly) BOOL hasGlobalDataType;
@property (readonly) NSString *sha256String;
@property (readonly, copy) NSString *localizedName;
@property long long disposition;
@property (getter=isAggregateAllowed) BOOL aggregateAllowed;
@property (getter=isAggregateNotified) BOOL aggregateNotified;
@property (getter=hasPendingAuthorization) BOOL pendingAuthorization;
@property (readonly) long long type;
@property (readonly) NSString *baseIdentifier;
@property (readonly) NSURL *resolvedURL;
@property (readonly) NSString *fullPath;
@property (copy, nonatomic) NSString *designatedRequirement;
@property (copy, nonatomic) NSData *lightweightRequirement;
@property (readonly) NSURL *iconURL;
@property (readonly) NSString *dumpVerboseDescription;
@property (readonly) BOOL containsDaemon;

+ (id)baseItemFromItemRecord:(id)a0;
+ (id)developerItemForItem:(id)a0;
+ (id)itemWithType:(long long)a0 identifier:(id)a1;
+ (id)itemWithType:(long long)a0 url:(id)a1;
+ (id)itemWithType:(long long)a0 url:(id)a1 identifier:(id)a2;
+ (id)itemWithType:(long long)a0 url:(id)a1 identifier:(id)a2 container:(id)a3;
+ (id)legacyAgentOrDaemonItemWithType:(long long)a0 URL:(id)a1 identifier:(id)a2 config:(id)a3 containerURL:(id *)a4 uid:(unsigned int)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_setContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isHidden;
- (void)setEnabled:(BOOL)a0;
- (void)setHidden:(BOOL)a0;
- (void)setType:(long long)a0;
- (BOOL)isEnabled;
- (BOOL)isLegacy;
- (BOOL)isGlobal;
- (BOOL)isManaged;
- (BOOL)isAllowed;
- (BOOL)intersectsType:(long long)a0 andIncludesType:(long long)a1;
- (BOOL)isType:(long long)a0;
- (BOOL)intersectsType:(long long)a0;
- (void)_appendToString:(id)a0 title:(const char *)a1 value:(id)a2 showNull:(BOOL)a3;
- (void)_initPropertiesWithURL:(id)a0 containerURL:(id)a1;
- (void)_setExecutableModificationDateFromURL:(id)a0;
- (id)_urlForBundleIdentifier:(id)a0;
- (void)addEmbeddedItemsObject:(id)a0;
- (BOOL)addedByDDM;
- (BOOL)addedByProfile;
- (unsigned long long)countOfEmbeddedItems;
- (long long)effectiveDisposition;
- (void)enumerateFamilyTreeUsingBlock:(id /* block */)a0;
- (void)enumerateFamilyTreeWithOptions:(long long)a0 block:(id /* block */)a1;
- (id)enumeratorOfEmbeddedItems;
- (BOOL)executableModificationDateMatchesFileSystem;
- (BOOL)hasGlobalDataType;
- (BOOL)includesType:(long long)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1;
- (id)initWithType:(long long)a0 url:(id)a1;
- (void)intersectEmbeddedItems:(id)a0;
- (BOOL)isAggregateManaged;
- (BOOL)isCurated;
- (BOOL)isSandboxed;
- (BOOL)matchesType:(long long)a0;
- (id)memberOfEmbeddedItems:(id)a0;
- (BOOL)modificationDateMatchesFileSystem;
- (BOOL)notified;
- (void)removeEmbeddedItemsObject:(id)a0;
- (void)setAddedByDDM:(BOOL)a0;
- (void)setAddedByProfile:(BOOL)a0;
- (void)setAggregateManaged:(BOOL)a0;
- (void)setAllowed:(BOOL)a0;
- (void)setCurated:(BOOL)a0;
- (BOOL)setExecutablePathFromLauncherTargetWithConfig:(id)a0;
- (void)setGlobal:(BOOL)a0;
- (void)setManaged:(BOOL)a0;
- (void)setNotified:(BOOL)a0;
- (id)setPropertiesWithBTMConfig:(id)a0;
- (void)setSandboxed:(BOOL)a0;
- (BOOL)syncURLAndBookmark;

@end

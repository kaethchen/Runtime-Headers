@class NSProgress, NSURL, NSDate, NSDictionary, FPItemID, NSFileProviderItemVersion, NSString, NSSet, FPSandboxingURLWrapper, NSPersonNameComponents, NSArray, NSData, NSNumber, UTType, NSError;

@interface FPItem : NSObject <NSFileProviderItemDecorating, NSFileProviderItem_Private, _SWFileProviderItem, NSFileProviderItem, NSCopying, NSSecureCoding> {
    FPSandboxingURLWrapper *_urlWrapper;
    BOOL _isFolder;
    BOOL _isPackage;
    BOOL _typesEvaluated;
    NSDictionary *_resolvedUserInfoCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isContainer;
@property (nonatomic) BOOL isContainerPristine;
@property (nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (nonatomic) BOOL fp_isDownloadRequested;
@property (readonly, nonatomic) NSString *providerIDForDeduplication;
@property (readonly) BOOL isValidAppLibrary;
@property (readonly, nonatomic) unsigned long long depthInHierarchy;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, nonatomic) NSString *localizedSharingStatusString;
@property (retain, nonatomic) NSString *formerIdentifier;
@property (readonly, nonatomic) FPItemID *formerItemID;
@property (retain, nonatomic) NSString *parentFormerIdentifier;
@property (readonly, nonatomic) FPItemID *parentFormerItemID;
@property (copy, nonatomic) NSString *containerDisplayName;
@property (copy, nonatomic) NSNumber *hasUnresolvedConflicts;
@property (readonly, nonatomic) NSNumber *isDownloadRequested;
@property (copy, nonatomic) NSString *sharingPermissions;
@property (nonatomic, getter=isUbiquitous) BOOL ubiquitous;
@property (nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *placeholderIdentifier;
@property (copy, nonatomic) NSString *spotlightDomainIdentifier;
@property (copy, nonatomic) NSString *parentItemIdentifier;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *fp_displayName;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (copy, nonatomic, setter=setContentType:) UTType *contentType;
@property (copy, nonatomic) NSNumber *documentSize;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *contentModificationDate;
@property (copy, nonatomic) NSNumber *favoriteRank;
@property (copy, nonatomic) NSDate *lastUsedDate;
@property (copy, nonatomic) NSNumber *childItemCount;
@property (nonatomic) struct NSFileProviderTypeAndCreator { unsigned int type; unsigned int creator; } typeAndCreator;
@property (nonatomic) unsigned long long fileSystemFlags;
@property (nonatomic, getter=isRecursivelyDownloaded) BOOL recursivelyDownloaded;
@property (nonatomic, getter=isDownloaded) BOOL downloaded;
@property (nonatomic, getter=isDownloading) BOOL downloading;
@property (nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (nonatomic, getter=isUploading) BOOL uploading;
@property (nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property (nonatomic, getter=isIgnoreRoot) BOOL ignoreRoot;
@property (nonatomic) unsigned long long exclusionType;
@property (nonatomic, getter=isTrashed) BOOL trashed;
@property (nonatomic, getter=isShared) BOOL shared;
@property (nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSError *uploadingError;
@property (copy, nonatomic) NSError *downloadingError;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic) unsigned long long enumerationOrigin;
@property (retain, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (retain, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (retain, nonatomic) NSData *versionIdentifier;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSData *tagData;
@property (nonatomic) BOOL supportsMostRecentVersionDownloaded;
@property (copy, nonatomic) NSString *fp_appContainerBundleIdentifier;
@property (copy, nonatomic) NSString *cloudContainerIdentifier;
@property (nonatomic) unsigned long long folderType;
@property (retain, nonatomic) NSString *preformattedOwnerName;
@property (retain, nonatomic) NSString *preformattedMostRecentEditorName;
@property (nonatomic, getter=isPending) BOOL pending;
@property (nonatomic, getter=isOffline) BOOL offline;
@property (retain, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (copy, nonatomic) NSString *symlinkTargetPath;
@property (readonly, nonatomic, getter=isFlattenedPackage) BOOL flattenedPackage;
@property (nonatomic, getter=isInPinnedFolder) BOOL inPinnedFolder;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (retain, nonatomic) NSArray *decorations;
@property (nonatomic) unsigned long long fileID;
@property (nonatomic) unsigned int documentID;
@property (nonatomic) BOOL allowsContextualMenuDownloadEntry;
@property (copy, nonatomic) NSDictionary *inheritedUserInfo;
@property (nonatomic) long long contentPolicy;
@property (nonatomic) long long inheritedContentPolicy;
@property (nonatomic) long long effectiveContentPolicy;
@property (readonly, nonatomic) FPItemID *providerItemID;
@property (nonatomic) BOOL isEvictedWithClone;
@property (readonly, nonatomic) FPItemID *itemID;
@property (readonly, nonatomic) FPItemID *parentItemID;
@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *providerItemIdentifier;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *detachedRootLogicalURL;
@property (retain, nonatomic) NSData *quarantineBlob;
@property (readonly, nonatomic) NSString *fp_domainIdentifier;
@property (retain, nonatomic) NSString *fp_parentDomainIdentifier;
@property (copy, nonatomic) NSArray *conflictingVersions;
@property (copy, nonatomic) NSString *fp_spotlightSubDomainIdentifier;
@property (retain, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isContainer;
@property (readonly, nonatomic) BOOL isContainerPristine;
@property (readonly, nonatomic) BOOL isExternalDownloadPlaceholder;
@property (nonatomic, getter=isContentZoneRoot) BOOL contentZoneRoot;
@property (retain, nonatomic) NSString *collaborationIdentifier;
@property (readonly, nonatomic) BOOL isCollaborationInvitation;
@property (retain, nonatomic) NSData *originatorInfo;
@property (copy, nonatomic) NSString *fileSystemFilename;
@property (readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, copy, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic, getter=isReadable) BOOL readable;
@property (readonly, nonatomic, getter=isWritable) BOOL writable;
@property (readonly, nonatomic, getter=isCloudItem) BOOL cloudItem;
@property (readonly, nonatomic) NSProgress *uploadingProgress;
@property (readonly, nonatomic) NSProgress *downloadingProgress;
@property (readonly, nonatomic) NSProgress *copyingProgress;
@property (readonly, nonatomic, getter=isActionable) BOOL actionable;
@property (readonly, copy, nonatomic) NSString *appContainerBundleIdentifier;
@property (readonly, nonatomic) NSArray *itemDecorations;
@property (readonly, nonatomic, getter=isItemPinned) BOOL itemPinned;
@property (readonly, nonatomic, getter=isPinnedSubitem) BOOL pinnedSubitem;
@property (readonly, nonatomic) NSDictionary *resolvedUserInfo;
@property (readonly, nonatomic, getter=isKnownByTheProvider) BOOL knownByTheProvider;
@property (readonly, nonatomic) unsigned long long unsupportedFields;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (readonly) BOOL fp_isCloudDocsContainer;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;

+ (id)fp_minimalAttributesForEviction;
+ (id)allUbiquitousResourceKeys;
+ (id)appLibraryFromContainerItem:(id)a0 documentsItem:(id)a1;
+ (id)archivePlaceholderForItem:(id)a0 underParent:(id)a1 inProviderDomainID:(id)a2 withArchiveFormat:(unsigned long long)a3;
+ (id)fp_minimalAttributesForEvictionPriority;
+ (id)fp_queryFetchAttributes;
+ (id)generatePlaceholderIdentifier;
+ (id)generatePlaceholderIdentifierWithOriginalID:(id)a0;
+ (id)genericArchivePlaceholderUnderParent:(id)a0 inProviderDomainID:(id)a1 withArchiveFormat:(unsigned long long)a2;
+ (id)placeholderWithCopyOfExistingItem:(id)a0 lastUsageUpdatePolicy:(unsigned long long)a1 underParent:(id)a2 inProviderDomainID:(id)a3;
+ (id)placeholderWithName:(id)a0 contentType:(id)a1 contentAccessDate:(id)a2 underParent:(id)a3 inProviderDomainID:(id)a4;
+ (id)placeholderWithName:(id)a0 isFolder:(BOOL)a1 contentAccessDate:(id)a2 underParent:(id)a3 inProviderDomainID:(id)a4;
+ (id)placeholderWithName:(id)a0 typeIdentifier:(id)a1 contentAccessDate:(id)a2 underParent:(id)a3 inProviderDomainID:(id)a4;
+ (id)temporaryPlaceholderFromItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setItemIdentifier:(id)a0;
- (BOOL)isBusy;
- (id)toSearchableItem;
- (void)setProviderID:(id)a0;
- (void)_evaluateTypes:(id)a0;
- (void *)_coreSpotlightAttributeForKey:(id)a0;
- (id)_downloadingStatus;
- (id)_sharedByDecorationType;
- (id)copyAsPending;
- (id)coreSpotlightIdentifier;
- (id)descriptionForFPCTL:(BOOL)a0;
- (id)fieldDifferencesWithItem:(id)a0;
- (id)fieldDifferencesWithItem:(id)a0 onlyMetadata:(BOOL)a1;
- (id)fp_valueForKeyPath:(id)a0;
- (id)humanReadableCapabilities;
- (id)initWithProviderDomainID:(id)a0 itemIdentifier:(id)a1 parentItemIdentifier:(id)a2 filename:(id)a3 contentType:(id)a4;
- (id)initWithProviderDomainID:(id)a0 itemIdentifier:(id)a1 parentItemIdentifier:(id)a2 filename:(id)a3 isDirectory:(BOOL)a4;
- (id)initWithProviderDomainID:(id)a0 itemIdentifier:(id)a1 parentItemIdentifier:(id)a2 filename:(id)a3 typeIdentifier:(id)a4;
- (id)initWithProviderID:(id)a0 domainIdentifier:(id)a1 itemIdentifier:(id)a2 parentItemIdentifier:(id)a3 filename:(id)a4 contentType:(id)a5;
- (id)initWithProviderID:(id)a0 domainIdentifier:(id)a1 itemIdentifier:(id)a2 parentItemIdentifier:(id)a3 filename:(id)a4 isDirectory:(BOOL)a5;
- (id)initWithSearchableItem:(id)a0;
- (id)initWithVendorItem:(id)a0 provider:(id)a1 domain:(id)a2 spotlightDomainIdentifier:(id)a3 extensionCapabilities:(unsigned long long)a4 useFPFS:(BOOL)a5;
- (BOOL)isEqualToItem:(id)a0;
- (BOOL)isKeepDownloaded;
- (BOOL)isValidContainerForAppLibrary;
- (void)itemIsSupportedSearchScope:(id /* block */)a0;
- (void)itemIsSupportedSearchScopeWithCachePolicy:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (long long)localizedStandardTagsCompare:(id)a0;
- (void)overrideFields:(id)a0 ofItem:(id)a1;
- (id)scopedSearchQueryUnderItem;
- (void)setProviderDomainID:(id)a0;
- (id)strippedCopy;
- (id)ubiquitousResourceKeysDiffAgainstItem:(id)a0;

@end

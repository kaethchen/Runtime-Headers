@class UTType, NSString, NSURL, NSData, NSDate, NSArray, NSDictionary, NSPersonNameComponents, NSNumber;

@interface FileProviderDaemon.LocalItem : NSObject <NSFileProviderItem, NSFileProviderItem_Private> {
    void /* unknown type, empty encoding */ filename;
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ creationDate;
    void /* unknown type, empty encoding */ contentModificationDate;
    void /* unknown type, empty encoding */ lastUsedDate;
    void /* unknown type, empty encoding */ tagData;
    void /* unknown type, empty encoding */ isAncestorInTrash;
    void /* unknown type, empty encoding */ mostRecentEditorNameComponents;
    void /* unknown type, empty encoding */ fileURL;
    void /* unknown type, empty encoding */ fp_spotlightSubDomainIdentifier;
    void /* unknown type, empty encoding */ extendedAttributes;
    void /* unknown type, empty encoding */ conflictingVersions;
    void /* unknown type, empty encoding */ symlinkTargetPath;
    void /* unknown type, empty encoding */ originatorInfo;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ isFolder;
    void /* unknown type, empty encoding */ isPackage;
    void /* unknown type, empty encoding */ isRegularItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerItem;
}

@property (nonatomic) void /* unknown type, empty encoding */ fileID;
@property (nonatomic, readonly) NSNumber *hasUnresolvedConflicts;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ itemIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ parentItemIdentifier;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ capabilities;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ documentSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ childItemCount;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *contentModificationDate;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSData *tagData;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ favoriteRank;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isTrashed;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ itemVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ excludedFromSync;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ typeAndCreator;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isUploadedTestingImpl;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDownloadedTestingImpl;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fp_isUbiquitous;
@property (nonatomic, readonly) NSString *fp_spotlightSubDomainIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fileSystemFlags;
@property (nonatomic, readonly) NSDictionary *extendedAttributes;
@property (nonatomic, readonly) NSArray *conflictingVersions;
@property (nonatomic, readonly) NSString *symlinkTargetPath;
@property (nonatomic, readonly) NSData *originatorInfo;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ fp_isContainer;
@property (nonatomic, readonly) NSString *fp_appContainerBundleIdentifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isExcludedFromSync;

@end

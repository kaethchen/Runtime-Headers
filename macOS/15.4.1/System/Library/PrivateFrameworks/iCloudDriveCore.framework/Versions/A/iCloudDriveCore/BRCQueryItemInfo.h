@interface BRCQueryItemInfo : NSObject

@property (readonly, nonatomic) BOOL isZoneRoot;
@property (readonly, nonatomic) BOOL isCloudDocsAppLibrary;
@property (readonly, nonatomic) BOOL isAppInstalled;
@property (readonly, nonatomic) BOOL isWallet;
@property (readonly, nonatomic) BOOL isContainerWithContentPolicyDownloadLazilyAndEvictOnRemoteUpdate;
@property (readonly, nonatomic) BOOL isGreedyDocument;
@property (readonly, nonatomic) BOOL isDocumentsFolder;
@property (readonly, nonatomic) BOOL isDocumentScopePublic;

+ (id)queryItemInfoForAppLibraryRoot:(id)a0;
+ (id)queryItemInfoForAppLibraryDocumentsFolder:(id)a0;
+ (id)queryItemInfoForItem:(id)a0;

@end

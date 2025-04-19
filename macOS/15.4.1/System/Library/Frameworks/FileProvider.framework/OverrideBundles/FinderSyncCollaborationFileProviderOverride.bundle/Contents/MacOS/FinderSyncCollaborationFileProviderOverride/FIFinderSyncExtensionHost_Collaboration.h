@class NSMutableArray, NSString, NSDictionary, NSExtension, NSObject;
@protocol FIFinderSyncExtensionProtocol;

@interface FIFinderSyncExtensionHost_Collaboration : NSExtensionContext <FIFinderSyncExtensionHostProtocol> {
    NSObject<FIFinderSyncExtensionProtocol> *_remote;
    NSObject<FIFinderSyncExtensionProtocol> *_syncRemote;
    NSMutableArray *_interestedURLs;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id requestIdentifier;
@property (copy, nonatomic) NSDictionary *toolbarItemDictionary;
@property (nonatomic) BOOL finishedRegisteringInterestedURLs;
@property (nonatomic) double activationTime;
@property (nonatomic) BOOL invalidRemote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void).cxx_destruct;
- (void)tearDown;
- (id)remote;
- (BOOL)allowedToRegisterForContainer:(id)a0;
- (void)finishedRegisteringInterestInContainers;
- (void)registerForDirectoryAtURL:(id)a0;
- (void)registerInterestInContainer:(id)a0;
- (void)setBadgeIdentifiersForURLs:(id)a0;
- (void)setBadgeImageDictionary:(id)a0 label:(id)a1 forIdentifier:(id)a2;
- (void)setToolbarItemName:(id)a0 imageData:(id)a1 isTemplate:(BOOL)a2 toolTip:(id)a3;
- (void)supportedServiceNamesForItemWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterForDirectoryAtURL:(id)a0;
- (void)valuesForAttributes:(id)a0 forItemWithURL:(id)a1 completion:(id /* block */)a2;
- (BOOL)interestedInFilePathURL:(id)a0;
- (id)syncRemote;

@end

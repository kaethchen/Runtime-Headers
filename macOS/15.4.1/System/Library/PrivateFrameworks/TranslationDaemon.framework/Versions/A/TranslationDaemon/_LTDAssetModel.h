@class NSString, NSArray, NSURL, _LTAssetProgress, NSObject;
@protocol _LTDAssetModelProtocol;

@interface _LTDAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSArray *_localeIdentifiers;
}

@property (retain, nonatomic) NSObject<_LTDAssetModelProtocol> *provider;
@property (readonly, nonatomic) unsigned long long downloadPriority;
@property (readonly, nonatomic) BOOL shouldPurgeWithLocale;
@property (readonly, nonatomic) BOOL isMultiLocaleAsset;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *assetId;
@property (readonly, nonatomic) NSString *assetName;
@property (readonly, nonatomic) NSString *coreAssetName;
@property (readonly, nonatomic) NSString *assetTypeName;
@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, nonatomic) NSString *managedAssetType;
@property (readonly, nonatomic) long long assetVersion;
@property (readonly, nonatomic) NSString *assetBuild;
@property (readonly, nonatomic) long long formatVersion;
@property (readonly, nonatomic) long long contentVersion;
@property (readonly, nonatomic) NSURL *getLocalFileUrl;
@property (readonly, nonatomic) long long downloadSize;
@property (readonly, nonatomic) long long unarchivedSize;
@property (readonly, nonatomic) BOOL isPremiumTextLID;
@property (readonly, nonatomic) long long requiredCapabilityIdentifier;
@property (readonly, nonatomic) NSString *assetLanguage;
@property (readonly, nonatomic) NSArray *supportedLanguages;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly, nonatomic) BOOL isDownloading;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL canBePurged;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionForAssetState:(unsigned long long)a0;
+ (id)localeIdentifiersForLanguageName:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithProvider:(id)a0;
- (id)status;
- (BOOL)refreshState;
- (id)stateDescription;
- (BOOL)supportsLocale:(id)a0;
- (BOOL)_isCompatibleWithThisDevice;
- (long long)compareAssetVersionReversed:(id)a0;
- (long long)compareDownloadPriority:(id)a0;
- (BOOL)isANEModel;
- (BOOL)isASRModel;
- (BOOL)isConfig;
- (BOOL)isMTModel;
- (BOOL)isNewerCompatibleVersionThan:(id)a0;
- (BOOL)isNewerVersionThan:(id)a0;
- (BOOL)isPhrasebook;
- (BOOL)isTTSModel;
- (id)localeIdentifiers;

@end

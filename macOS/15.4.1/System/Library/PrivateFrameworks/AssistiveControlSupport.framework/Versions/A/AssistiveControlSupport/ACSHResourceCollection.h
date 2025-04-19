@class NSMutableDictionary, NSArray, NSSet, NSLock;

@interface ACSHResourceCollection : NSObject

@property (retain, nonatomic) NSMutableDictionary *_assetDictionaryByAssetIdentifier;
@property (retain, nonatomic) NSMutableDictionary *_directoryFileWrapperByAssetIdentifier;
@property (retain, nonatomic) NSMutableDictionary *_unsavedAssets;
@property (retain, nonatomic) NSMutableDictionary *_images;
@property (retain, nonatomic) NSLock *_lock;
@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *registeredAssetIdentifiers;
@property (readonly, nonatomic) NSSet *symbolNames;

+ (BOOL)isUserResource:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)imageWithIdentifier:(id)a0;
- (void)unregisterAssets:(id)a0;
- (id)_createDataFromImage:(id)a0;
- (void)_registerAssetsFromResourceCollection:(id)a0 override:(BOOL)a1;
- (id)addAsset:(id)a0 withIdentifier:(id)a1 type:(unsigned long long)a2 name:(id)a3 systemImageName:(id)a4 systemImageSymbolName:(id)a5;
- (id)addAssetImage:(id)a0 name:(id)a1 systemImageName:(id)a2 systemImageSymbolName:(id)a3 mask:(BOOL)a4;
- (id)assetsMatchingType:(unsigned long long)a0;
- (void)copyAssetsFromResourceCollection:(id)a0;
- (id)dataForAssetWithIdentifier:(id)a0;
- (id)dictionaryForSaving;
- (id)fileWrapperForAssetWithIdentifier:(id)a0;
- (id)imageSymbolNameWithIdentifier:(id)a0;
- (id)infoForAssetWithIdentifier:(id)a0;
- (id)nameForAssetWithIdentifier:(id)a0 isSystemImage:(BOOL *)a1 isSymbolImage:(BOOL *)a2;
- (void)overrideAssetsFromResourceCollection:(id)a0;
- (unsigned long long)propertiesForAssetWithIdentifier:(id)a0;
- (BOOL)registerAssets:(id)a0 withDirectoryFileWrapper:(id)a1;
- (void)registerAssetsFromResourceCollection:(id)a0;
- (id)soundWithIdentifier:(id)a0;
- (unsigned long long)typeForAssetWithIdentifier:(id)a0;

@end

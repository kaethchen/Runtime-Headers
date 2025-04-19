@class NSMutableArray, NSMutableDictionary;

@interface AVTAssetLibrary : NSObject {
    NSMutableArray *_assets[42];
    NSMutableDictionary *_assetsByName[42];
}

+ (id)sharedAssetLibrary;

- (void).cxx_destruct;
- (void)reload;
- (id)assetWithType:(long long)a0 identifier:(id)a1;

@end

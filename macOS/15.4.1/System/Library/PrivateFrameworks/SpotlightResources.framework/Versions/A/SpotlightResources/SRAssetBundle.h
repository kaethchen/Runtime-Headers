@class NSArray, NSMutableDictionary, NSDictionary, NSLocale;

@interface SRAssetBundle : NSObject {
    NSMutableDictionary *_contents;
    NSDictionary *_contentVersions;
}

@property (readonly, nonatomic) NSArray *contentTypes;
@property (readonly, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (BOOL)shouldUpdateForContentVersions:(id)a0;
- (id)initWithLocale:(id)a0 contentVersions:(id)a1;
- (id)assetsWithContentType:(id)a0;
- (void)loadAssetsWithContentType:(id)a0 contentName:(id)a1 contentPath:(id)a2;

@end

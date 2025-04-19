@class NSString, NSBundle, NSSet, NSError, NSCache;
@protocol KHThemeManagerSource;

@interface KHThemeProvider : NSObject {
    NSString *_title;
    NSString *_themeDescription;
    NSCache *_categoryBelongCache;
    NSCache *_previewImagesByProductCode;
    NSSet *_productCodes;
}

@property (retain, nonatomic) NSString *themeBundleIdentifier;
@property (retain, nonatomic) NSString *themePreviewBundleIdentifier;
@property (weak, nonatomic) id<KHThemeManagerSource> source;
@property (retain, nonatomic) id context;
@property (retain) NSError *lastError;
@property (readonly) NSString *themeIdentifier;
@property (readonly) NSString *themePreviewIdentifier;
@property (readonly) BOOL isThemeLocal;
@property (readonly) BOOL isThemePreviewLocal;
@property (readonly) BOOL isThemeValid;
@property (readonly) BOOL isThemePreviewValid;
@property (readonly) NSBundle *themeBundle;
@property (readonly) NSBundle *themePreviewBundle;
@property (readonly) NSString *title;
@property (readonly) NSString *themeDescription;
@property (readonly) long long projectType;
@property (readonly) NSSet *productCodes;

+ (id)defaultSortDescriptors;
+ (id)_bulkDownload:(BOOL)a0 forThemeProviders:(id)a1 completionBlock:(id /* block */)a2;
+ (id)bulkDownloadAndPrepareThemePreviewsForUse:(id)a0 completionBlock:(id /* block */)a1;
+ (id)bulkDownloadAndPrepareThemesForUse:(id)a0 completionBlock:(id /* block */)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)catalog;
- (id)records;
- (id)downloadAndPrepareThemeForUse:(id /* block */)a0;
- (id)initWithSource:(id)a0 themeIdentifier:(id)a1 themePreviewIdentifier:(id)a2;
- (id)themeDatabaseURL;
- (void)updateThemeLocal;
- (void)updateThemePreviewLocal;

@end

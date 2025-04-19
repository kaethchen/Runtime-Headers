@class KHThemePreview, NSString, NSMutableDictionary, NSOperationQueue, KHThemeProvider;

@interface KHThemeProviderConfig : NSObject {
    NSOperationQueue *_previewQueue;
}

@property (readonly) NSString *baseIdentifier;
@property (retain, nonatomic) NSMutableDictionary *configuration;
@property (retain, nonatomic) KHThemeProvider *themeProvider;
@property (retain) NSString *preferredLanguageCode;
@property (readonly, nonatomic) KHThemePreview *themePreview;
@property (readonly, nonatomic) NSString *title;

+ (id)themeProviderConfigWithProvider:(id)a0 config:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)loadThemePreview;
- (void)requestPreviewImageForCountryCode:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestPreviewImageWithCompletionHandler:(id /* block */)a0;

@end

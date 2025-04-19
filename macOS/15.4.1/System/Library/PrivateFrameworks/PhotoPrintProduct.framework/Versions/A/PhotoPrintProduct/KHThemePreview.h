@class KHThemePreviewInfo, NSString, KHThemePreviewDefaultInfo, NSURL, KHThemePreviewLayoutInfo, KHThemePreviewLocalizableFile;

@interface KHThemePreview : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *dictionaryURL;
@property (retain, nonatomic) NSURL *localizablePreviewURL;
@property (nonatomic) unsigned long long previewImageVersion;
@property (retain, nonatomic) KHThemePreviewInfo *info;
@property (retain, nonatomic) KHThemePreviewLayoutInfo *layoutInfo;
@property (retain, nonatomic) KHThemePreviewDefaultInfo *defaultInfo;
@property (retain, nonatomic) KHThemePreviewLocalizableFile *localizableFile;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *englishTitle;

- (void).cxx_destruct;
- (void)commonInit;
- (BOOL)_loadTextStyleForFrame:(id)a0 countryCode:(id)a1;
- (id)generatePreviewImage;
- (id)generatePreviewImageForCountryCode:(id)a0;
- (id)initWithIdentifier:(id)a0 andURL:(id)a1;
- (BOOL)localizablePreviewImageOnDisk;
- (BOOL)previewFilesAreValid;

@end

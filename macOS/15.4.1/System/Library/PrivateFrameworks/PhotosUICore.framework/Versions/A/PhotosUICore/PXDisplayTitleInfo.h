@class PHAssetCollection, NSString;

@interface PXDisplayTitleInfo : PXObservable <PXPhotoLibraryUIChangeObserver>

@property (retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection;
@property (nonatomic) BOOL useVerboseSmartDescription;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *fontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayTitleInfoForDetailsOfAssetCollection:(id)a0 withTitleCategory:(long long)a1 defaultTitle:(id)a2 defaultTitleCategory:(long long)a3 titleKey:(id)a4 titleCategoryKey:(id)a5 defaultSubtitle:(id)a6 subtitleKey:(id)a7 simulatedLoadingDelay:(double)a8 preferredAttributesPromise:(id /* block */)a9;

- (id)init;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setFontName:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)_updatePropertiesFromAssetCollection;
- (id)initWithAssetCollection:(id)a0 useVerboseSmartDescription:(BOOL)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 fontName:(id)a2;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end

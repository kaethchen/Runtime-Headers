@class NSString, CUICatalog, NSArray;

@interface NSImageCatalogRepProvider : NSObject <NSImageRepProvider> {
    CUICatalog *_catalog;
    NSString *_imageName;
    NSArray *_allRepresentationsCache;
}

@property (readonly) CUICatalog *catalog;
@property (readonly) BOOL _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSString, CUICatalog, _NSSimpleLRUCache;

@interface NSImageSymbolRepProvider : NSObject <NSImageRepProvider, NSCopying> {
    NSString *_symbolName;
    CUICatalog *_catalog;
    double _variableValue;
    BOOL _createdWithCompatibilityImageName;
    _NSSimpleLRUCache *_repCache;
}

@property (readonly) CUICatalog *catalog;
@property (readonly) NSString *symbolName;
@property (readonly) BOOL symbolIsFromPrivateCatalog;
@property (readonly, getter=wasCreatedWithCompatibilityImageName) BOOL createdWithCompatibilityImageName;
@property (readonly) BOOL _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_bestRepresentationForImage:(id)a0 hints:(id)a1;
- (id)_initWithSymbolName:(id)a0 inCatalog:(id)a1 variableValue:(double)a2 createdWithCompatibilityImageName:(BOOL)a3;
- (id)allRepresentationsForImage:(id)a0;
- (id)bestRepresentationForImage:(id)a0 hints:(id)a1;
- (BOOL)canConfigureForHints:(id)a0;

@end

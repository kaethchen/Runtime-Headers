@class NSArray, NSString;

@interface NSImageMultiURLReferencingRepProvider : NSObject <NSImageRepProvider, NSCopying>

@property (readonly) NSArray *representations;
@property (readonly, copy) NSArray *urls;
@property (readonly) BOOL _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)allRepresentationsForImage:(id)a0;
- (id)initWithURLs:(id)a0;

@end

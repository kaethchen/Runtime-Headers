@class NSString, NSArray;

@interface NSImageIconRefRepProvider : NSObject <NSImageRepProvider> {
    struct OpaqueIconRef { } *_iconRef;
    NSArray *_representations;
}

@property (readonly) BOOL _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithIconRef:(struct OpaqueIconRef { } *)a0;
- (id)allRepresentationsForImage:(id)a0;

@end

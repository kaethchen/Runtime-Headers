@class NSString, NSArray;

@interface NSImageArrayRepProvider : NSObject <NSImageRepProvider, NSCopying> {
    NSArray *_reps;
}

@property (readonly) BOOL _isSymbolImage;
@property (readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)recache;
- (id)allRepresentationsForImage:(id)a0;
- (id)bestRepresentationForImage:(id)a0 hints:(id)a1;
- (id)initWithRepresentations:(id)a0;

@end

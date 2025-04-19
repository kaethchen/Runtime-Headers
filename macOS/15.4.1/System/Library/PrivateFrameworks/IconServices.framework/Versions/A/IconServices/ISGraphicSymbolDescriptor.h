@class NSURL;

@interface ISGraphicSymbolDescriptor : IFGraphicSymbolDescriptor

@property (retain) NSURL *_url;
@property (readonly) BOOL placeholder;

+ (id)descriptorFromGraphicIconConfiguration:(id)a0;
+ (id)descriptorFromGraphicSymbolRecipe:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end

@class NSDictionary;

@interface EXExtensionPointCatalog : NSObject

@property (readonly) NSDictionary *extensionPointByIdentifierPlatform;

- (id)init;
- (void).cxx_destruct;
- (id)extensionPointForIdentifier:(id)a0;
- (id)extensionPointForIdentifier:(id)a0 platform:(unsigned int)a1;
- (id)initWithEnumerator:(id)a0;

@end

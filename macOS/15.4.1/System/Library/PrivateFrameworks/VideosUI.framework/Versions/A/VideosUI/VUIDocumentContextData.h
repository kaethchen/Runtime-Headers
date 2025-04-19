@class NSDictionary, VUIExtensionContextData;

@interface VUIDocumentContextData : NSObject

@property (copy, nonatomic) NSDictionary *contextDataDict;
@property (copy, nonatomic) VUIExtensionContextData *extensionContextData;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonData;

@end

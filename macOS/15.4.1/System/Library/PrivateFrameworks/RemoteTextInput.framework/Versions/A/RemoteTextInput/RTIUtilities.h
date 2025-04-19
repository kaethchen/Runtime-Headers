@interface RTIUtilities : NSObject

+ (id)_attributeToReplaceForDecoding:(id)a0;
+ (id)_attributeToReplaceForCoding:(id)a0;
+ (id)_attributesToAllowForCoding;
+ (id)_codableAttributedString:(id)a0 validAttributes:(id)a1;
+ (id)_decodableAttributedString:(id)a0;
+ (id)_textAnnotationAttributes;
+ (id)currentClientCodingServiceOptions;
+ (id)customInfoClassesForType:(id)a0 forClass:(Class)a1;
+ (id)customInfoDictionary;
+ (void)performClientCoding:(id /* block */)a0 withServiceOptions:(id)a1;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1 forClass:(Class)a2;
+ (void)unregisterCustomInfoType:(id)a0 forClass:(Class)a1;

@end

@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizedHTMLDocumentFromHTML:(id)a0;
+ (id)attributesDictionaryForType:(id)a0;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)documentTypeForType:(id)a0;
+ (id)htmlFooter;
+ (id)htmlHeader;
+ (BOOL)isMissingHTMLHeaderInString:(id)a0;
+ (void)loadAttributedStringInWebViewFromHTMLFile:(id)a0 handler:(id /* block */)a1 attributedStringOptions:(id)a2 documentAttributes:(id *)a3 name:(id)a4 coercionOptions:(id)a5;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)stringConversionBehavior;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (long long)tableTemplateSubjectType;

- (id)attributedString;
- (BOOL)isContent;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)generateAttributedString:(id /* block */)a0 fromFile:(id)a1 forClass:(Class)a2 coercionOptions:(id)a3;
- (void)generateDataRepresentation:(id /* block */)a0 fromAttributedString:(id)a1 forType:(id)a2;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateRTFDRepresentation:(id /* block */)a0 fromAttributedString:(id)a1 forType:(id)a2;
- (void)getFileRepresentationsForSerialization:(id /* block */)a0;
- (void)getPDFFromResource:(id)a0 includeMargin:(BOOL)a1 options:(id)a2 handler:(id /* block */)a3;

@end

@class NSString, NSDictionary, NSURL, WFFileType, WFObjectType;

@interface WFURLContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSURL *URL;
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

+ (id)URLCoercions;
+ (id)attributionSetContentOfURL:(id)a0;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)mutableURLCoercions;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (void)rediscoverURLCoercionClassesIfNeeded;
+ (void)registerURLCoercion:(Class)a0;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (long long)tableTemplateSubjectType;

- (id)webResource;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentationForPrintHandler:(id /* block */)a0 coercionOptions:(id)a1;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)getContentsOfURLWithHandler:(id /* block */)a0;
- (void)getContentsWithRequest:(id)a0 cacheResult:(BOOL)a1 expectedByteCountHandler:(id /* block */)a2 writtenByteCountHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)getContentsWithRequest:(id)a0 expectedByteCountHandler:(id /* block */)a1 writtenByteCountHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)getHeadersWithCompletionHandler:(id /* block */)a0;
- (void)getPDFWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPreferredFileExtension:(id /* block */)a0;
- (void)getPreferredFileSize:(id /* block */)a0;
- (void)getTitleWithPermissionRequestor:(id)a0 completionHandler:(id /* block */)a1;
- (id)intermediaryTypesForCoercionToItemClass:(Class)a0;
- (id)outputTypes;

@end

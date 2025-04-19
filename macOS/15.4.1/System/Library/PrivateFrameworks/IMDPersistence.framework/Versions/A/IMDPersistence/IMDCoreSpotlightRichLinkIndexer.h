@class NSString, CSCustomAttributeKey;

@interface IMDCoreSpotlightRichLinkIndexer : NSObject

@property (class, readonly, nonatomic) CSCustomAttributeKey *lpHasRichMediaCustomKey;
@property (class, readonly, nonatomic) CSCustomAttributeKey *lpPluginPathsCustomKey;
@property (class, readonly, nonatomic) CSCustomAttributeKey *lpDescriptionCustomKey;
@property (class, readonly, nonatomic) CSCustomAttributeKey *lpTitleCustomKey;
@property (class, readonly, nonatomic) IMDCoreSpotlightRichLinkIndexer *defaultIndexer;

@property (retain, nonatomic) Class class;
@property (retain, nonatomic) NSString *linkType;
@property (retain, nonatomic) NSString *linkSubtype;
@property (retain, nonatomic) NSString *prefix;
@property (readonly, nonatomic) NSString *specializationClassName;

+ (id)_indexerForClassName:(id)a0;
+ (id)indexerForMetadata:(id)a0;
+ (void)insertLinkType:(id)a0 toAttributes:(id)a1;

- (void).cxx_destruct;
- (id)_cleanedUpURLFromTransformer:(id)a0;
- (void)_insertLinkName:(id)a0 prefix:(id)a1 toAttributes:(id)a2;
- (void)_insertLinkName:(id)a0 toAttributes:(id)a1;
- (void)_insertTypeInfoToSearchableAttributes:(id)a0 fromMetadata:(id)a1;
- (id)_linkSubtypeForMetadata:(id)a0;
- (id)_linkTypeForMetadata:(id)a0;
- (void)_mapPropertiesFromMetadata:(id)a0 toAttributes:(id)a1;
- (id)_transformerForMetadata:(id)a0 originalURL:(id)a1;
- (id)initWithClass:(Class)a0 linkType:(id)a1 linkSubtype:(id)a2 prefix:(id)a3;
- (id)initWithClass:(Class)a0 linkType:(id)a1 prefix:(id)a2;
- (void)mapPropertiesFromMetadata:(id)a0 text:(id)a1 originalURL:(id)a2 attachmentPaths:(id)a3 toAttributes:(id)a4;

@end

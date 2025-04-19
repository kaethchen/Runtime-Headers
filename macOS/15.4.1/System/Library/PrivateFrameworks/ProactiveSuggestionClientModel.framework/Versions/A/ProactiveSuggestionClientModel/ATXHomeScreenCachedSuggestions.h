@class NSUUID, NSDictionary, NSArray, NSString;

@interface ATXHomeScreenCachedSuggestions : NSObject <ATXUICacheProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDictionary *cachedSuggestionWidgetLayouts;
@property (readonly, nonatomic) NSDictionary *cachedAppPredictionPanelLayouts;
@property (readonly, nonatomic) NSDictionary *cachedTopOfStackLayouts;
@property (readonly, nonatomic) NSDictionary *cachedSuggestedWidgetsLayouts;
@property (readonly, nonatomic) NSArray *fallbackSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)compactDescription;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (id)allSuggestionsInCachedSuggestions;
- (id)initWithUUID:(id)a0 suggestionWidgetLayouts:(id)a1 appPredictionPanelLayouts:(id)a2 topOfStackLayouts:(id)a3 suggestedWidgetLayouts:(id)a4 fallbackSuggestions:(id)a5;
- (id)minSuggestionsInCachedSuggestionsWithoutPreviewsOrFallbacks;
- (id)_jsonRawDataForLayoutListMapping:(id)a0;
- (id)_jsonRawDataForWidgetLayoutMapping:(id)a0;
- (id)_layoutDictionaryWithKeys:(id)a0 protoLayouts:(id)a1;
- (id)_layoutListDictionaryWithKeys:(id)a0 protoLayoutLists:(id)a1;
- (id)_protoLayoutListsFromLayoutListDictionary:(id)a0 orderedByKeys:(id)a1;
- (id)_protoLayoutsFromLayoutDictionary:(id)a0 orderedByKeys:(id)a1;
- (id)descriptionWithoutPreviews;
- (id)protoForBiome;

@end

@class NSString, NSMutableArray;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying> {
    NSMutableArray *_cachedAppPredictionPanelIds;
    NSMutableArray *_cachedAppPredictionPanelLayouts;
    NSMutableArray *_cachedSuggestedWidgetLayoutListKeys;
    NSMutableArray *_cachedSuggestedWidgetLayoutLists;
    NSMutableArray *_cachedSuggestionWidgetIds;
    NSMutableArray *_cachedSuggestionWidgetLayouts;
    NSMutableArray *_cachedTopOfStackLayoutKeys;
    NSMutableArray *_cachedTopOfStackLayouts;
    NSMutableArray *_fallbackSuggestions;
    NSString *_uuidString;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

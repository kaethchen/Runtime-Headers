@class NSString;

@interface ATXMPBBlendingHomeScreenWidgetTopOfStackSelectionTracker : PBCodable <NSCopying> {
    struct { unsigned char selectionType : 1; unsigned char widgetsInStack : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (nonatomic) BOOL hasSelectionType;
@property (nonatomic) int selectionType;
@property (readonly, nonatomic) BOOL hasClientModelIdOfHighestRankingSuggestion;
@property (retain, nonatomic) NSString *clientModelIdOfHighestRankingSuggestion;
@property (readonly, nonatomic) BOOL hasHighestConfidenceCategory;
@property (retain, nonatomic) NSString *highestConfidenceCategory;
@property (nonatomic) BOOL hasWidgetsInStack;
@property (nonatomic) unsigned int widgetsInStack;
@property (readonly, nonatomic) BOOL hasExecuableTypeOfHighestRankingSuggestion;
@property (retain, nonatomic) NSString *execuableTypeOfHighestRankingSuggestion;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSelectionType:(id)a0;
- (id)selectionTypeAsString:(int)a0;

@end

@class ATXPBHeroAppPrediction, ATXPBInfoSuggestion, ATXPBLinkAction, NSString, NSMutableArray, ATXPBAction;

@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying> {
    ATXPBAction *_executableAction;
    ATXPBHeroAppPrediction *_executableHeroApp;
    ATXPBInfoSuggestion *_executableInfoSuggestion;
    ATXPBLinkAction *_executableLinkAction;
    NSString *_executableString;
    int _executableType;
    NSMutableArray *_references;
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

@class NSString;

@interface SEMAppCustomVocabularySearchResult : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned short vocabularyType;
@property (readonly, nonatomic) NSString *vocabularyString;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;
@property (readonly, nonatomic) NSString *originAppId;

+ (id)resultFromFTSRecords:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVocabularyType:(unsigned short)a0 vocabularyString:(id)a1 vocabularyIdentifier:(id)a2 originAppId:(id)a3;
- (BOOL)isEqualToAppCustomVocabularySearchResult:(id)a0;

@end

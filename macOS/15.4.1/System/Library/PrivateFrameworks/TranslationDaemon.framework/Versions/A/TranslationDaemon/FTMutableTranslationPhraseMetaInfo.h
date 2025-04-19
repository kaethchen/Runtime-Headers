@class NSString, NSArray;

@interface FTMutableTranslationPhraseMetaInfo : FTTranslationPhraseMetaInfo

@property (copy, nonatomic) NSString *romanization;
@property (copy, nonatomic) NSArray *selection_spans;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

@class NSString, NSMutableDictionary;

@interface CSUSearchableKnowledgeObject : NSObject

@property (readonly, nonatomic) unsigned long long qid;
@property (readonly, nonatomic) short idType;
@property (readonly, copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSMutableDictionary *localizedLabelDictionary;
@property (readonly, nonatomic) double confidenceValue;
@property (readonly, nonatomic) BOOL sensitiveLocation;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *vertical;
@property (readonly, copy, nonatomic) NSMutableDictionary *localizedSynonyms;
@property (readonly, copy, nonatomic) NSMutableDictionary *localizedSynonymsDictionary;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) int version;

+ (BOOL)labelDictionaryFromString:(id)a0 directoryWriteBack:(id *)a1 error:(id *)a2;
+ (id)searchDictionary:(id)a0 withLocale:(id)a1;
+ (id)stringFromLabelDictionary:(id)a0;
+ (id)stringFromSynonymsDictionary:(id)a0;
+ (BOOL)synonymsDictionaryFromLocaleString:(id)a0 directoryWriteBack:(id *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)localizedLabelWithLocale:(id)a0;
- (id)localizedSynonymsWithLocale:(id)a0;
- (void)setLocalizedSynonyms:(id)a0 forLocale:(id)a1;
- (id)initWithQID:(unsigned long long)a0 idType:(short)a1 localizedLabel:(id)a2 confidence:(double)a3 sensitiveLation:(BOOL)a4 category:(id)a5 vertical:(id)a6 localizedSynonyms:(id)a7 longitude:(double)a8 latitute:(double)a9 version:(int)a10 locale:(id)a11;
- (id)initWithQID:(unsigned long long)a0 idType:(short)a1 localizedLabel:(id)a2 confidence:(double)a3 sensitiveLocation:(BOOL)a4 category:(id)a5 vertical:(id)a6 localizedSynonyms:(id)a7 longitude:(double)a8 latitute:(double)a9 version:(int)a10;
- (id)initWithQID:(unsigned long long)a0 idType:(short)a1 localizedLabelDictionary:(id)a2 confidence:(double)a3 sensitiveLocation:(BOOL)a4 category:(id)a5 vertical:(id)a6 localizedSynonymsDictionary:(id)a7 longitude:(double)a8 latitude:(double)a9 version:(int)a10;
- (void)setLocalizedLabel:(id)a0 forLocale:(id)a1;

@end

@class PPNamedEntityRecord;

@interface PPNamedEntityWithRecord : PPNamedEntity {
    PPNamedEntityRecord *_mostRelevantRecord;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (double)sentimentScore;
- (id)initWithName:(id)a0 category:(unsigned long long)a1 dynamicCategory:(id)a2 language:(id)a3 mostRelevantRecord:(id)a4;
- (id)mostRelevantRecord;

@end

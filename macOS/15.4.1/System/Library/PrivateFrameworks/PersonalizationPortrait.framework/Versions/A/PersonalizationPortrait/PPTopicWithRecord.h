@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {
    PPTopicRecord *_mostRelevantRecord;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (double)sentimentScore;
- (id)initWithTopicIdentifier:(id)a0 mostRelevantRecord:(id)a1;
- (id)mostRelevantRecord;

@end

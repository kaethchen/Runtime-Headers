@class NSArray;

@interface ABMetadataPlanToCompleteOperation : ABMetadataOperation {
    NSArray *_uniqueIds;
    unsigned long long _jobType;
}

- (void).cxx_destruct;
- (void)main;
- (unsigned long long)metadataJobType;
- (id)initWithMetadataManager:(id)a0 recordUniqueIds:(id)a1 jobType:(unsigned long long)a2;

@end

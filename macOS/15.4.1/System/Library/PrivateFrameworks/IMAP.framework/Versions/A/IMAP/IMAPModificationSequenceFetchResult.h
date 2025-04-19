@interface IMAPModificationSequenceFetchResult : IMAPFetchResult

@property (nonatomic) unsigned long long modificationSequence;

- (id)description;

@end

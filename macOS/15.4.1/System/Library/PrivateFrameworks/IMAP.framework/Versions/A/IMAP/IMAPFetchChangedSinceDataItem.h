@interface IMAPFetchChangedSinceDataItem : IMAPFetchDataItem

- (id)init;
- (id)initWithModificationSequenceNumber:(unsigned long long)a0 includeVanished:(BOOL)a1;

@end

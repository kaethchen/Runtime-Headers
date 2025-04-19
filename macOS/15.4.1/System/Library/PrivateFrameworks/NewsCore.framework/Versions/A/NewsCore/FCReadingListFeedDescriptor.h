@interface FCReadingListFeedDescriptor : FCPrivateZoneFeedDescriptor

- (id)name;
- (id)backingHeadlineIDs;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1 feedType:(long long)a2;
- (id)initWithReadingList:(id)a0;
- (id)readingList;

@end

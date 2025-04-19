@interface IMAPRFC822SizeFetchResult : IMAPFetchResult

@property (nonatomic) unsigned int messageSize;

- (id)description;

@end

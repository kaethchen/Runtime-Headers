@class NSArray;

@interface ICNFIMAPFlagsFetchResult : ICNFIMAPFetchResult

@property (copy, nonatomic) NSArray *flagsArray;
@property (readonly, nonatomic) unsigned int messageFlags;

- (id)description;
- (void).cxx_destruct;

@end

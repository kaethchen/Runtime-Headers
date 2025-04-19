@class NSString, NSData;

@interface ICNFIMAPBodyFetchResult : ICNFIMAPFetchResult

@property (readonly, copy, nonatomic) NSString *section;
@property (retain, nonatomic) NSData *fetchData;
@property (nonatomic) unsigned int startOffset;

- (id)description;
- (void).cxx_destruct;

@end

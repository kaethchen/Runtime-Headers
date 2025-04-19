@class NSArray;

@interface IMAPFlagsFetchResult : IMAPFetchResult

@property (copy, nonatomic) NSArray *flagsArray;
@property (readonly, nonatomic) long long messageFlags;

- (id)description;
- (void).cxx_destruct;

@end

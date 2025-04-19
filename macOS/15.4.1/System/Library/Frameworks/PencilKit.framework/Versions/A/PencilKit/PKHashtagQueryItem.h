@class NSString, CHPrefixQueryItem;

@interface PKHashtagQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (copy, nonatomic) NSString *hashtagResult;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)strokeIdentifiers;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)a0;

@end

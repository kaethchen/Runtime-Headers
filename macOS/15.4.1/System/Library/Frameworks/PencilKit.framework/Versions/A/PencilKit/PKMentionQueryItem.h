@class NSString, CHPrefixQueryItem;

@interface PKMentionQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem;
@property (copy, nonatomic) NSString *mentionResult;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)strokeIdentifiers;
- (id)baselinePath;
- (id)initWithCoreHandwritingPrefixQueryItem:(id)a0;

@end

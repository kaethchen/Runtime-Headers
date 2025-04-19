@class NSString;

@interface ABCNGroupNamePrefixPredicate : ABCNPredicate

@property (readonly, copy, nonatomic) NSString *prefix;

- (void)dealloc;
- (id)initWithPrefix:(id)a0;
- (id)cn_coreDataPredicate;

@end

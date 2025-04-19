@interface AXDisplayLinkManagerTargetAction : NSObject

@property (retain, nonatomic) id target;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) unsigned long long displayDidRefreshCount;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)displayDidRefresh:(id)a0;
- (id)initWithTarget:(id)a0 actionSelector:(SEL)a1;

@end

@class TPSectionTemplatePage;

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator

@property (retain, nonatomic) TPSectionTemplatePage *sectionTemplatePage;
@property (nonatomic) long long fragmentIndex;
@property (nonatomic) long long headerFooterType;

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithSectionTemplatePage:(id)a0;
- (void)p_incrementFragmentIndex;
- (void)p_incrementHeaderFooterType;

@end

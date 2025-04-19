@class NSArray, PKApplyFooterContent;

@interface PKPayLaterDynamicContentSection : NSObject

@property (copy, nonatomic) NSArray *rows;
@property (copy, nonatomic) PKApplyFooterContent *footerContent;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

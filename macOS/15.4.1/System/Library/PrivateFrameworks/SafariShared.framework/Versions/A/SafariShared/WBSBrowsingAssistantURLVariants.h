@class NSURL, NSArray;

@interface WBSBrowsingAssistantURLVariants : NSObject

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSArray *variants;

+ (id)variantsForURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)_queryVariantsFromArray:(id)a0;

@end

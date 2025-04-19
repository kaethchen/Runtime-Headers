@class NSString;

@interface WFHTMLToMarkdownAbbreviation : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *abbreviation;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

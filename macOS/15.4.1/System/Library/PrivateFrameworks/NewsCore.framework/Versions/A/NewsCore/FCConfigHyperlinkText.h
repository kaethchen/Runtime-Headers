@class NSString, NSArray;

@interface FCConfigHyperlinkText : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *links;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;
- (id)initWithText:(id)a0 links:(id)a1;

@end

@class NSString;

@interface SCRLanguageTag : NSObject

@property (copy, nonatomic) NSString *taggedString;
@property (copy, nonatomic) NSString *languageID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 languageID:(id)a1;

@end

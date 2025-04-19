@class NSString, NSArray, NSURL;

@interface SSDictionaryResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *definitionString;
@property (retain, nonatomic) NSArray *definitions;
@property (retain, nonatomic) NSString *dictionaryName;
@property (retain, nonatomic) NSString *word;
@property (retain, nonatomic) NSURL *dictionaryURL;

+ (id)bundleId;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildTitle;

@end

@class NSString, NSImage, NSArray;

@interface AMDescriptionViewItem : NSObject

@property (readonly, copy, nonatomic) NSString *replacementSuggestion;
@property (readonly, copy, nonatomic) NSString *summaryDescription;
@property (readonly, copy, nonatomic) NSString *inputDescription;
@property (readonly, copy, nonatomic) NSString *outputDescription;
@property (readonly, copy, nonatomic) NSString *relatedItemsDescription;
@property (retain) NSImage *image;
@property (copy) NSString *name;
@property (copy) NSString *summary;
@property (copy) NSString *input;
@property (copy) NSString *alert;
@property (copy) NSString *note;
@property (copy) NSString *options;
@property (copy) NSString *requires;
@property (copy) NSString *output;
@property (copy) NSString *version;
@property (copy) NSString *website;
@property (copy) NSString *copyright;
@property (copy) NSArray *replacementItemNames;
@property (copy) NSArray *relatedItemNames;
@property (copy) NSArray *inputTypes;
@property (copy) NSArray *outputTypes;
@property BOOL isDeprecated;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;

@end

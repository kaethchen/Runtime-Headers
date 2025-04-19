@class NSString, NSArray;

@interface _NSCollectionLayoutVisualFormatParser : NSObject

@property (nonatomic) int axis;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *visualFormat;
@property (copy, nonatomic) NSArray *items;

+ (int)axisForVisualFormat:(id)a0;
+ (id)parserWithVisualFormat:(id)a0;
+ (id)parsersWithVisualFormats:(id)a0 seperatedByDelimiter:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)_parse;
- (id)initWithVisualFormat:(id)a0;

@end

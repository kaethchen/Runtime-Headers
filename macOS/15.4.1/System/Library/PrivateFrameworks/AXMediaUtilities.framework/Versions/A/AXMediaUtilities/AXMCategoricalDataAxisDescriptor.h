@class NSArray, NSString, NSAttributedString;

@interface AXMCategoricalDataAxisDescriptor : NSObject <AXMChartDictionaryRepresentable, AXMDataAxisDescriptor>

@property (copy, nonatomic) NSArray *categoryOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) BOOL isCategoricalAxis;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (double)upperBound;
- (id)initWithAttributedTitle:(id)a0 categoryOrder:(id)a1;
- (id)initWithTitle:(id)a0 categoryOrder:(id)a1;
- (double)lowerBound;
- (double)normalizedAxisValueForValue:(id)a0;

@end

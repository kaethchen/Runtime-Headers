@class NSString, _NSLocalizedStringResource, NSArray;

@interface WFActionParameterSummary : NSObject

@property (readonly, copy, nonatomic) _NSLocalizedStringResource *singleFormatString;
@property (readonly, copy, nonatomic) NSString *singleFormatLocalizedString;
@property (readonly, copy, nonatomic) _NSLocalizedStringResource *title;
@property (readonly, copy, nonatomic) NSArray *possibleValues;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)localizedTitle;
- (id)initWithValues:(id)a0;
- (id)localizedFormatStringWithAction:(id)a0;
- (id)initWithLocalizedString:(id)a0;
- (id)initWithString:(id)a0 title:(id)a1;
- (id)initWithValues:(id)a0 title:(id)a1;

@end

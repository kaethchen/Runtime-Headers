@class NSMutableDictionary;

@interface CPKCategoriesPageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessibilityDescriptionDictionary;
@property (retain, nonatomic) NSMutableDictionary *buttonDictionary;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSMutableDictionary *iconDictionary;
@property (retain, nonatomic) NSMutableDictionary *tooltipIdentifierDictionary;

- (void).cxx_destruct;
- (id)imageAtIndex:(unsigned long long)a0;
- (void)setImage:(id)a0 atIndex:(long long)a1;
- (id)buttonAtIndex:(unsigned long long)a0;
- (id)accessibilityDescriptionAtIndex:(unsigned long long)a0;
- (void)setAccessibilityDescription:(id)a0 atIndex:(unsigned long long)a1;
- (void)setButton:(id)a0 atIndex:(unsigned long long)a1;
- (void)setTooltipIdentifier:(id)a0 atIndex:(unsigned long long)a1;
- (id)tooltipIdentifierAtIndex:(unsigned long long)a0;

@end

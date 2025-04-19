@interface ABPostalAddressFormatSubmenuGenerator : NSObject

+ (id)makeChangeAddressFormatMenuWithSubmenuItems:(id)a0 checkmarkSelectedCountryCode:(id)a1;
+ (id)makeChangeAddressFormatSubmenuItemsWithTarget:(id)a0 selector:(SEL)a1;
+ (id)makeCountryCodeLocalizedCountryNamePairs;
+ (id)makeResetToDefaultItemWithTarget:(id)a0 selector:(SEL)a1;
+ (id)menuItemWith:(id)a0 selector:(SEL)a1 selectedCountryCode:(id)a2;
+ (BOOL)shouldEnableItem:(id)a0 givenCountryCode:(id)a1;
+ (id)sortedCountryCodeLocalizedCountryNamePairs;

@end

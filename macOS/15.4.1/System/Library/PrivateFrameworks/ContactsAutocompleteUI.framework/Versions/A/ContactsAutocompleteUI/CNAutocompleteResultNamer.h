@class NSString, NSDataDetector;

@interface CNAutocompleteResultNamer : NSObject

@property (copy) NSString *prefix;
@property (copy) NSString *addressString;
@property BOOL includeAddress;
@property BOOL onlyEmailFormat;
@property (retain) NSDataDetector *phoneNumberDetector;

+ (id)displayStringForResult:(id)a0 accountName:(id)a1 prefix:(id)a2 includeAddress:(BOOL)a3 onlyEmailFormat:(BOOL)a4;
+ (id)displayStringForResult:(id)a0 withPrefix:(id)a1 withAddress:(id)a2 includeAddress:(BOOL)a3 onlyEmailFormat:(BOOL)a4;

- (void).cxx_destruct;
- (id)baseNameForResult:(id)a0;
- (id)displayStringForResult:(id)a0 accountName:(id)a1;
- (id)displayStringForResult:(id)a0 withAddress:(id)a1;
- (id)effectiveAddressForResult:(id)a0 withAddressString:(id)a1;
- (id)fallbackDisplayNameWithComponents:(id)a0;
- (id)fallbackDisplayNameWithResult:(id)a0;
- (id)fallbackNameWithResult:(id)a0;
- (id)initAndIncludeAddress:(BOOL)a0 onlyEmailFormat:(BOOL)a1;
- (id)initWithPrefix:(id)a0 includeAddress:(BOOL)a1 onlyEmailFormat:(BOOL)a2;
- (id)matchingNameWithResult:(id)a0;
- (id)matchingStringByCombiningNameComponents:(id)a0;
- (BOOL)shouldDecorateString:(id)a0 withAddress:(id)a1;
- (id)stringByCleaningString:(id)a0;
- (id)stringByDecoratingString:(id)a0 withAddress:(id)a1 isPhoneNumber:(BOOL)a2;
- (id)stringByDecoratingString:(id)a0 withAddressString:(id)a1 forResult:(id)a2;
- (id)tokenizedNameWithDisplayName:(id)a0;

@end

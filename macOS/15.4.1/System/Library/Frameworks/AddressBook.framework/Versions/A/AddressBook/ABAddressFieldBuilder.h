@class NSTextField, NSArray, ABCardViewStyleProvider, CNPostalAddress, NSColor;

@interface ABAddressFieldBuilder : NSObject

@property (copy, nonatomic) NSArray *textFieldsArrangedByLine;
@property (copy, nonatomic) NSArray *firstFieldsPerLine;
@property (readonly, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, nonatomic) BOOL fieldsEditable;
@property (readonly, nonatomic) NSColor *textColor;
@property (readonly, nonatomic) NSTextField *streetField;
@property (readonly, copy, nonatomic) NSArray *stackViewsArrangedByLine;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;

+ (id)log;
+ (unsigned long long)numberOfLinesInPostalAddress:(id)a0 isEditing:(BOOL)a1;

- (void).cxx_destruct;
- (id)addressFormat;
- (id)addressLinesFromFormatDictionary:(id)a0;
- (void)buildFields;
- (id)fieldForAddressComponent:(id)a0 ofDictionary:(id)a1;
- (id)initWithAddress:(id)a0 textColor:(id)a1 fieldsEditable:(BOOL)a2;
- (unsigned long long)tagForFormatComponent:(id)a0;
- (id)textFieldForAddressComponent:(id)a0 addressFormat:(id)a1 font:(id)a2;

@end

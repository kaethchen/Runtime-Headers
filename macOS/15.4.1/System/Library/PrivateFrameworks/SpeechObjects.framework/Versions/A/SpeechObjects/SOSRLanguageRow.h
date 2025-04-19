@class NSString, SOSRLanguageItem;

@interface SOSRLanguageRow : NSObject {
    BOOL _selected;
}

@property (getter=isGroupRow) BOOL groupRow;
@property (getter=isSelected) BOOL selected;
@property unsigned long long tableIndex;
@property (readonly, retain) NSString *title;
@property (readonly, retain) SOSRLanguageItem *srLanguageItem;

+ (id)arrangedRowsFromSRLanguageItems:(id)a0 groupCountries:(BOOL)a1 useLanguageCodeOnlyToSelectItems:(BOOL)a2 showCurrentLocaleAtTop:(BOOL)a3;

- (void)dealloc;
- (id)description;
- (id)initWithTitle:(id)a0 srLanguageItem:(id)a1;
- (void)setSelectedUsingLanguageCodeOnlyToSelectItems:(BOOL)a0;

@end

@class NSArray, NSMutableArray, PrettyPinyin;

@interface CIMFindInputCodeDataFormatter : NSObject

@property (retain, nonatomic) NSArray *originalArray;
@property (retain, nonatomic) NSMutableArray *formattedData;
@property (nonatomic) unsigned long long numberOfColumns;
@property (retain, nonatomic) PrettyPinyin *pinyinFormatter;
@property (nonatomic) BOOL zhuyinChabaiMode;
@property (nonatomic, getter=isSimplifiedChinese) BOOL simplifiedChinese;
@property (readonly, nonatomic) unsigned long long numberOfRows;

- (id)init;
- (void).cxx_destruct;
- (id)_formatInWubiHua:(id)a0;
- (id)_pinyinWithTone:(id)a0;
- (id)_pinyinWithTones:(id)a0;
- (void)_setHeightForRow:(id)a0;
- (id)_stringFromArray:(id)a0 colorString:(BOOL)a1;
- (double)heightOfRow:(unsigned long long)a0;
- (void)setFormattedDictionaryForData:(id)a0;
- (id)stringForRow:(unsigned long long)a0 column:(id)a1;

@end

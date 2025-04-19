@class KHDBEntity, NSString, NSMutableDictionary;

@interface KHDBColumnRemapper : NSObject

@property (retain, nonatomic) KHDBEntity *entity;
@property (retain, nonatomic) NSString *columnName;
@property (nonatomic) unsigned long long columnIndex;
@property (nonatomic) int options;
@property (retain, nonatomic) NSMutableDictionary *previousToNewValueMapping;
@property (retain, nonatomic) id defaultValue;

+ (id)remapperWithEntity:(id)a0 columnName:(id)a1 options:(int)a2;

- (void)dealloc;
- (void)addRemapping:(id)a0 forPreviousValue:(id)a1;
- (id)initWithEntity:(id)a0 columnName:(id)a1 options:(int)a2;
- (id)mappingForPreviousValue:(id)a0;
- (void)setColumnIndexInColumns:(id)a0;

@end

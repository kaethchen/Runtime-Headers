@class ASKDataRow;

@interface ASKDataCell : NSObject <NSCopying> {
    ASKDataRow *_dataRow;
    id _name;
    id _objectValue;
}

+ (id)cellForRow:(id)a0 withName:(id)a1 andValue:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)name;
- (void)setName:(id)a0;
- (id)content;
- (id)objectSpecifier;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (void)setContent:(id)a0;
- (id)dataRow;
- (unsigned long long)objectIndex_ask;
- (id)dataItem;
- (id)initForRow:(id)a0 withName:(id)a1 andValue:(id)a2;
- (void)setDataItem:(id)a0;
- (void)setDataRow:(id)a0;

@end

@class NSString, __end_cap_, __end_;

@interface TSCEGetPivotDataBundle : NSObject {
    struct vector<NSString *, std::allocator<NSString *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> { id *__value_; } x1; } _dataFields;
    struct vector<TSCEValue *, std::allocator<TSCEValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEValue *__strong *, std::allocator<TSCEValue *>> { id *__value_; } x1; } _dataValues;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } _missingGroupingColumn;
}

@property (retain, nonatomic) NSString *aggregateFieldName;
@property (readonly, nonatomic) unsigned long long keyValuePairCount;
@property (nonatomic) unsigned short aggregateIndex;
@property (nonatomic) unsigned char aggregateType;
@property (nonatomic) unsigned char showAsType;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addDataField:(id)a0 withValue:(id)a1;
- (void)enumerateDataKeyValuePairsUsingBlock:(id /* block */)a0;
- (unsigned long long)firstMissingDataField;
- (void)setMissingDataFieldAtIndex:(unsigned long long)a0;

@end

@interface TSCETaggedDecimalListObject : NSObject {
    struct TSCETaggedDecimalList { struct vector<TSCETaggedDecimal, std::allocator<TSCETaggedDecimal>> { struct TSCETaggedDecimal *__begin_; struct TSCETaggedDecimal *__end_; struct __compressed_pair<TSCETaggedDecimal *, std::allocator<TSCETaggedDecimal>> { struct TSCETaggedDecimal *__value_; } __end_cap_; } _list; unsigned long long _startIdx; unsigned long long _size; } _taggedList;
}

+ (id)createFromGridValue:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 evaluationContext:(id)a3 ignoreError:(BOOL)a4 ignoreDuplicates:(BOOL)a5 outError:(id *)a6;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)taggedDecimalList;

@end

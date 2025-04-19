@class NSString, NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long _dataType;
    NSDictionary *_dictionary;
    NSArray *_members;
}

@property BOOL isIndirectArgumentBuffer;
@property (readonly) NSString *typeName;

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)members;
- (unsigned long long)dataType;
- (BOOL)isStructLayoutThreadSafeWith:(id)a0;
- (void)setMembers:(id *)a0 count:(unsigned long long)a1;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1 typeName:(id)a2;
- (id)formattedDescription:(unsigned long long)a0 withPrintedTypes:(id)a1;
- (id)initWithMembers:(id *)a0 count:(unsigned long long)a1;
- (id)memberByName:(id)a0;

@end

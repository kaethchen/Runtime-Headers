@class NSData, NSString;

@interface KVItem : NSObject <KVJSONEncodable, KVJSONDecodable> {
    const struct Item { unsigned char x0[1]; } *_item;
}

@property (readonly, nonatomic) NSData *buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemFromCascadeItem:(id)a0 error:(id *)a1;
+ (id)itemFromBuffer:(id)a0 error:(id *)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)itemType;
- (BOOL)isEqualToItem:(id)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (id)itemId;
- (id)toCascadeItem:(id *)a0;
- (id)JSONWithIndent:(unsigned char)a0;
- (id)fieldsWithType:(long long)a0;
- (void)enumerateFieldsWithLocaleType:(long long)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)fieldCount;
- (id)firstFieldWithType:(long long)a0;
- (BOOL)hasFieldWithType:(long long)a0 label:(id)a1 value:(id)a2;
- (id)initFromDictionary:(id)a0 error:(id *)a1;
- (id)initWithBuffer:(id)a0 verify:(BOOL)a1 copy:(BOOL)a2 error:(id *)a3;

@end

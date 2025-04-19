@class NSMutableDictionary;

@interface SMDBEntry : NSObject <NSCopying, NSCoding> {
    NSMutableDictionary *dictionaryRepresentation;
}

+ (id)DSKeyForNativeKey:(id)a0;
+ (id)DSRecordTypeForNativeRecordType:(id)a0;
+ (id)nativeKeyForDSKey:(id)a0;
+ (id)nativeRecordTypeForDSRecordType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (id)attributes;
- (id)dataForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)metaDataForKey:(id)a0;
- (void)_setDictionaryRep:(id)a0;
- (id)convertEntry:(id)a0 toClass:(Class)a1;
- (void)convertRecordDictionary:(id)a0 fromClass:(Class)a1;
- (void)deleteKey:(id)a0 forMetaType:(BOOL)a1;
- (void)replaceValue:(id)a0 withNewValue:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1 forMetaType:(BOOL)a2;

@end

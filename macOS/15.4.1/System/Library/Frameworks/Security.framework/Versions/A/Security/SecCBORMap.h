@class NSMapTable;

@interface SecCBORMap : SecCBORValue {
    NSMapTable *m_data;
}

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)fieldType;
- (id)getSortedKeys;
- (void)setKey:(id)a0 value:(id)a1;
- (void)write:(id)a0;

@end

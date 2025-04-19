@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject {
    NSDictionary *_attributes;
    NSDictionary *_unknownAttributes;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (BOOL)getInt32:(int *)a0 forKey:(id)a1;
- (BOOL)getUInt64:(unsigned long long *)a0 forKey:(id)a1;
- (BOOL)getUInt16:(unsigned short *)a0 forKey:(id)a1;
- (id)UUIDStringForKey:(id)a0;
- (id)initWithAttributes:(id)a0 unknownAttributes:(id)a1;

@end

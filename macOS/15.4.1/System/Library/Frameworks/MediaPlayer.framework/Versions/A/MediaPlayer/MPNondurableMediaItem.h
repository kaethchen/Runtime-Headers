@interface MPNondurableMediaItem : MPMediaItem {
    unsigned long long _persistentID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:(id)a0;
+ (id)defaultPropertyValues;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)a0;
- (id)mediaLibrary;
- (BOOL)existsInLibrary;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPersistentID:(unsigned long long)a0;
- (BOOL)isUsableAsRepresentativeItem;
- (id)valuesForProperties:(id)a0;

@end

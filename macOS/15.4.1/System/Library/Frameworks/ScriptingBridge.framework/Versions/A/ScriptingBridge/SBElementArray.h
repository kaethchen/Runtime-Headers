@class SBObject;

@interface SBElementArray : NSMutableArray {
    SBObject *_parent;
    unsigned int _elementCode;
    void *_reserved;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (id)arrayByApplyingSelector:(SEL)a0;
- (Class)classForCoder;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)valueForKey:(id)a0;
- (id)_parent;
- (void)_setParent:(id)a0;
- (void)filterUsingPredicate:(id)a0;
- (id)filteredArrayUsingPredicate:(id)a0;
- (id)objectWithID:(id)a0;
- (id)get;
- (void)removeObjectWithID:(id)a0;
- (id)_context;
- (id)objectWithName:(id)a0;
- (id)_filteredArrayUsingPredicate:(id)a0;
- (id)arrayByApplyingSelector:(SEL)a0 withObject:(id)a1;
- (id)descriptorForExpression:(id)a0;
- (Class)elementClass;
- (unsigned int)elementCode;
- (id)initWithParent:(id)a0 elementCode:(unsigned int)a1;
- (id)objectAtLocation:(id)a0;
- (id)objectWithKeyForm:(unsigned int)a0 keyData:(id)a1;
- (id)qualifiedSpecifier;
- (void)removeObjectWithName:(id)a0;

@end

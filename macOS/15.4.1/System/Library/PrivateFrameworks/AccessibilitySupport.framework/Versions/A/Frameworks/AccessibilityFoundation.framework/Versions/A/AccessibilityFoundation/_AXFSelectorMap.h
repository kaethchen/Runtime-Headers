@class NSArray;

@interface _AXFSelectorMap : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *_map;
}

@property (readonly, copy, nonatomic) NSArray *allValues;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForSelector:(SEL)a0;
- (void)removeObjectForSelector:(SEL)a0;
- (void)setObject:(id)a0 forSelector:(SEL)a1;

@end

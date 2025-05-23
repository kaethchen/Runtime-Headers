@class NSIndexSet, NSArray;

@interface KGElementIdentifierSet : NSObject <NSCopying> {
    struct Bitmap { unsigned long long _bitCount; unsigned long long _lastOffsetFoundAt; struct vector<degas::BitsetPtr, std::allocator<degas::BitsetPtr>> { struct BitsetPtr *__begin_; struct BitsetPtr *__end_; struct __compressed_pair<degas::BitsetPtr *, std::allocator<degas::BitsetPtr>> { struct BitsetPtr *__value_; } __end_cap_; } _bitSets; BOOL _dirty; } _bitmap;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSIndexSet *indexSet;
@property (readonly, copy, nonatomic) NSArray *indexArray;
@property (readonly, nonatomic) unsigned long long firstElement;
@property (readonly, nonatomic) unsigned long long lastElement;
@property (readonly, nonatomic) BOOL isEmpty;

+ (void)drainBitsetPool;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithIndexSet:(id)a0;
- (struct KGElementIdentifierSetIndex { unsigned long long x0; long long x1; })startIndex;
- (struct KGElementIdentifierSetIndex { unsigned long long x0; long long x1; })endIndex;
- (BOOL)containsIdentifier:(unsigned long long)a0;
- (const void *)bitmap;
- (void)enumerateIdentifiersWithBlock:(id /* block */)a0;
- (id)initWithElementIdentifier:(unsigned long long)a0;
- (id)identifierSetByAddingIdentifier:(unsigned long long)a0;
- (id)identifierSetByFormingUnion:(id)a0;
- (id)identifierSetByIntersectingIdentifierSet:(id)a0;
- (id)identifierSetBySubtractingIdentifierSet:(id)a0;
- (id)initWithIndexArray:(id)a0;
- (BOOL)intersectsIdentifierSet:(id)a0;
- (id)initWithBitmap:(const void *)a0;
- (id)prefix:(unsigned long long)a0;
- (BOOL)containsIdentifierSet:(id)a0;
- (unsigned long long)elementAtOffset:(unsigned long long)a0;
- (id)extractRangeByIndex:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)identifierSetByFilteringUsingBlock:(id /* block */)a0;
- (id)identifierSetByFormingSymmetricDifferenceWithIdentifierSet:(id)a0;
- (id)identifierSetByRemovingIdentifier:(unsigned long long)a0;
- (struct KGElementIdentifierSetIndex { unsigned long long x0; long long x1; })indexAfterIndex:(struct KGElementIdentifierSetIndex { unsigned long long x0; long long x1; })a0;
- (struct KGElementIdentifierSetIndex { unsigned long long x0; long long x1; })indexWithIterator:(const void *)a0;
- (id)initWithIndexCollection:(id)a0;
- (id)initWithLiteralData:(id)a0;
- (BOOL)isEqualToElementIdentifierSet:(id)a0;
- (BOOL)isSubsetOfIdentifierSet:(id)a0;
- (id)literalDataRepresentation;
- (void *)mutableBitmap;
- (unsigned long long)randomElement;

@end

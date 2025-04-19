@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long *_indexes;
    unsigned long long _length;
    unsigned long long _inlinePayload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long length;

+ (id)bs_emptyPath;
+ (void)initialize;
+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)a0;
+ (id)indexPathWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;

- (BOOL)bs_hasPrefix:(id)a0;
- (id)bs_indexPathByAddingPrefix:(id)a0;
- (id)bs_indexPathByRemovingFirstIndex;
- (id)bs_nearestCommonAncestorWithIndexPath:(id)a0;
- (id)bs_subpathFromPosition:(unsigned long long)a0;
- (id)bs_subpathWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getIndexes:(unsigned long long *)a0;
- (void)getIndexes:(unsigned long long *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexAtPosition:(unsigned long long)a0;
- (id)indexPathByAddingIndex:(unsigned long long)a0;
- (id)indexPathByRemovingLastIndex;
- (id)initWithIndex:(unsigned long long)a0;
- (id)initWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;

@end

@class NSArray, NSIndexSet;

@interface CHTokenizedResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tokenRows;
@property (readonly, copy, nonatomic) NSArray *textTokenRows;
@property (readonly, copy, nonatomic) NSArray *mathTokenRows;
@property (readonly, nonatomic) NSIndexSet *strokeIndexes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)containsStartingTokenEquivalentToToken:(id)a0;
- (long long)indexOfEquivalentTokenRow:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithTokenRows:(id)a0;

@end

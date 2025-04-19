@class NSString;
@protocol NSCopying, NSObject;

@interface AVLegibleMediaSearchMatchDescription : AVSearchMatchDescription

@property (readonly, nonatomic) id<NSCopying, NSObject> cueIdentifier;
@property (readonly, nonatomic) NSString *cueString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } cueStringMatchRange;
@property (readonly, nonatomic) unsigned long long cueMatchIndex;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPresentationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 cueIdentifier:(id)a1 cueString:(id)a2 cueStringMatchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 cueMatchIndex:(unsigned long long)a4;

@end

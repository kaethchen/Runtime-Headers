@class NSString;

@interface EFPathComponent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sanitizedString;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, copy, nonatomic) NSString *pathExtension;
@property (readonly, copy, nonatomic) EFPathComponent *pathComponentByDeletingPathExtension;

+ (id)pathComponentWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)subpathToIndex:(unsigned long long)a0;

@end

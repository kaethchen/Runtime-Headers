@class NSDictionary, IDSServerBagRawContents;

@interface IDSServerBagLoadedContents : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) IDSServerBagRawContents *rawContents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 rawContents:(id)a1;

@end

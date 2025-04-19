@class NSString;

@interface PLGenericLocationTuple : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *lookupIdentifier;
@property (readonly, nonatomic) unsigned long long indexCategory;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 lookupIdentifier:(id)a1 indexCategory:(unsigned long long)a2;

@end

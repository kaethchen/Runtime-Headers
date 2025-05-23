@class NSString;

@interface PSISynonym : NSObject <NSCopying, PSISearchableTerm>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long owningGroupId;
@property (readonly, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 category:(unsigned long long)a1 owningGroupId:(unsigned long long)a2 identifier:(id)a3;

@end

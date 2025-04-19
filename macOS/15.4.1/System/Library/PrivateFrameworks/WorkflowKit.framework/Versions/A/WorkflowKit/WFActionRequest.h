@class NSString, NSDictionary, WFAction;

@interface WFActionRequest : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *serializedParameters;
@property (retain, nonatomic) WFAction *result;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 serializedParameters:(id)a1;

@end

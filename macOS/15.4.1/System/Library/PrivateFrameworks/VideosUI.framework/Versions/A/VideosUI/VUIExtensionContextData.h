@class NSDictionary;

@interface VUIExtensionContextData : NSObject

@property (copy, nonatomic) NSDictionary *contextDataDict;
@property (readonly, nonatomic) NSDictionary *jsonData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

@class NSString;

@interface NSDictionaryControllerKeyValuePair : NSObject

@property (copy) NSString *key;
@property (retain) id value;
@property (copy) NSString *localizedKey;
@property (readonly, getter=isExplicitlyIncluded) BOOL explicitlyIncluded;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)value;
- (id)_init;
- (id)key;
- (void)setKey:(id)a0;
- (void)setValue:(id)a0;
- (id)localizedKey;
- (void)setLocalizedKey:(id)a0;

@end

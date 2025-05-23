@class NSString;

@interface VSKeychainItemAttribute : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long attributeType;
@property (copy, nonatomic) NSString *attributeValueClassName;
@property (nonatomic) struct __CFString { } *secItemAttributeKey;
@property (retain, nonatomic) id defaultValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

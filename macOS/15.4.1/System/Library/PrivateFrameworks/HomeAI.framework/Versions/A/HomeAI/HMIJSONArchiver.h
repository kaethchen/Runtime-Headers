@class NSString;

@interface HMIJSONArchiver : NSCoder {
    id _container;
}

@property long long options;
@property (readonly) NSString *objectJSON;
@property (readonly) NSString *objectPrettyJSON;

+ (id)JSONObjectStringWithObject:(id)a0;
+ (id)JSONObjectStringWithObject:(id)a0 pretty:(BOOL)a1 options:(long long)a2;
+ (id)JSONObjectWithObject:(id)a0 options:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsKeyedCoding;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)object;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (id)_JSONObjectWithObject:(id)a0 options:(long long)a1;
- (void)_addClassToContainer:(Class)a0;
- (void)_addValueToContainer:(id)a0 forKey:(id)a1;
- (BOOL)_containerIsArray;
- (id)_valueForNumber:(id)a0;
- (id)initWithArray;
- (id)initWithDictionary;

@end

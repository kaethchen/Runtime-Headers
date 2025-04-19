@class NSDictionary;

@interface CIFilterGenerator : NSObject <NSSecureCoding, NSCopying, CIFilterConstructor> {
    struct CIFilterGeneratorStruct { id x0; id x1; id x2; id x3; id x4; } *_filterGeneratorStruct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *exportedKeys;
@property (retain, nonatomic) NSDictionary *classAttributes;

+ (id)filterGenerator;
+ (id)filterGeneratorWithContentsOfURL:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)userInfo;
- (id)filter;
- (void)setUserInfo:(id)a0;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)filterWithName:(id)a0;
- (id)connections;
- (id)customAttributes;
- (void)sortConnections;
- (void)_addConnectionsFromObject:(id)a0 toArray:(id)a1;
- (id)_dictionaryForArchiving;
- (BOOL)_initializeWithContentsOfDictionary:(id)a0;
- (void)connectObject:(id)a0 withKey:(id)a1 toObject:(id)a2 withKey:(id)a3;
- (id)connectObject:(id)a0 withKey:(id)a1 toObject:(id)a2 withKey:(id)a3 userInfo:(id)a4;
- (id)connectionsForObject:(id)a0;
- (void)copyCustomAttributes:(id)a0;
- (id)decodedValueForKey:(id)a0 ofClass:(id)a1 fromDictionary:(id)a2;
- (void)disconnectObject:(id)a0 withKey:(id)a1 toObject:(id)a2 withKey:(id)a3;
- (void)encodeValue:(id)a0 forKey:(id)a1 intoDictionary:(id)a2;
- (void)exportKey:(id)a0 fromObject:(id)a1 withName:(id)a2;
- (id)immutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)registerFilterName:(id)a0;
- (void)removeConnection:(id)a0;
- (void)removeExportedKey:(id)a0;
- (void)setAttributes:(id)a0 forExportedKey:(id)a1;

@end

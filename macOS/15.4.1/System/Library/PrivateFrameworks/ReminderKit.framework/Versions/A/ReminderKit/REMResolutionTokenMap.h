@class NSMutableDictionary;

@interface REMResolutionTokenMap : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *map;

+ (id)mapWithData:(id)a0;
+ (id)resolutionTokenMapWithJSONData:(id)a0 keyMap:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)archivedData;
- (id)initWithMap:(id)a0;
- (long long)compare:(id)a0 forKey:(id)a1;
- (id)getTokenForKey:(id)a0;
- (long long)compareAndMergeWithMap:(id)a0 forKey:(id)a1;
- (void)forceMergeFromMap:(id)a0 forKey:(id)a1;
- (id)getTokenKeys;
- (void)initTokenWithDefaultValueIfNecessaryForKey:(id)a0;
- (BOOL)mergeWithMap:(id)a0 forKey:(id)a1;
- (void)setToken:(id)a0 forKey:(id)a1;
- (void)updateForKey:(id)a0;

@end

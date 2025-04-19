@class NUSourceSchema, NSString, NSMutableDictionary, NUIdentifier, NUSourceDefinition;

@interface NUSource : NSObject <NUIdentifiable>

@property (retain) NUSourceDefinition *definition;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) NUSourceSchema *schema;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSMutableDictionary *settings;
@property (readonly, nonatomic) NUIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithIdentifier:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)isEqualToSource:(id)a0;
- (BOOL)resolve:(id)a0 error:(out id *)a1;
- (id)initWithSourceSchema:(id)a0;

@end

@class NSDictionary, NSMutableDictionary;

@interface APSettingsStorageVolatile : NSObject <APSettingsStorableProtocol>

@property (readonly, nonatomic) NSDictionary *defaults;
@property (readonly, nonatomic) NSMutableDictionary *volatileData;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id)valueForKey:(id)a0;
- (id)initWithDefaultValues:(id)a0;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (void)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end

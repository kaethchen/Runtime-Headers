@class NSDictionary, NSMutableDictionary, APUnfairLock;

@interface APSettingsStorageFile : NSObject <APSettingsStorableProtocol>

@property (readonly, nonatomic) APUnfairLock *accessLock;
@property (readonly, nonatomic) NSDictionary *defaults;
@property (retain, nonatomic) NSMutableDictionary *storage;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id)valueForKey:(id)a0;
- (id)initWithDefaultValues:(id)a0;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (void)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)_filePathWithName:(id)a0;
- (void)_readFileIfNecessaryUsingKey:(id)a0;
- (void)_writeFileUsingKey:(id)a0;

@end

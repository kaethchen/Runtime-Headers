@class NSString;
@protocol CLSettingsManagerProtocol, CLIntersiloUniverse;

@interface CLSettingsMirror : CLSettingsDictionary <CLSettingsManagerClientProtocol>

@property (retain, nonatomic) id<CLSettingsManagerProtocol> manager;
@property (retain, nonatomic) id<CLIntersiloUniverse> universe;
@property (copy, nonatomic) id /* block */ settingsChangeHandler;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setLong:(long long)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)initInUniverse:(id)a0;
- (void)didUpdateSettings:(id)a0;
- (void)setInt:(int)a0 forKey:(id)a1;
- (void)setShort:(short)a0 forKey:(id)a1;

@end

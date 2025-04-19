@class NSArray;

@interface VFX.VFXEffect : NSObject {
    void /* unknown type, empty encoding */ effectID;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ rootEntity;
    void /* unknown type, empty encoding */ entityObject;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ onEffectRestartSubject;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ _enabled;
    void /* unknown type, empty encoding */ _tombstoned;
}

@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) long long rootObjectID;
@property (nonatomic, weak) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ version;
@property (nonatomic) BOOL allowRemoteEdition;
@property (nonatomic, readonly) NSArray *bindings;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isTombstoned;
@property (nonatomic, readonly) NSArray *cameras;

- (id)init;
- (void).cxx_destruct;
- (void)dump;
- (BOOL)isEnabled:(id)a0;
- (void)setClientTextureWithId:(long long)a0 texture:(id)a1;
- (long long)fetchClientTextureIDWithNamed:(id)a0;
- (id)firstBindingWithName:(id)a0;
- (void)setParameterOf:(long long)a0 named:(id)a1 type:(long long)a2 size:(long long)a3 with:(id /* block */)a4;
- (id)bindingOf:(id)a0 named:(id)a1;
- (id)bindingWith:(long long)a0 named:(id)a1;
- (long long)lookupObjectIDByName:(id)a0;
- (void)parameterOf:(long long)a0 named:(id)a1 type:(long long)a2 with:(id /* block */)a3;
- (id)allCameraNamed:(id)a0;
- (id)parameterOf:(id)a0 named:(id)a1;
- (void)parameterOf:(long long)a0 named:(id)a1 with:(id /* block */)a2;
- (void)setEnabled:(id)a0 enabled:(BOOL)a1;
- (void)setParameterOf:(id)a0 named:(id)a1 :(id)a2;
- (void)setParameterOf:(long long)a0 named:(id)a1 with:(id /* block */)a2;
- (void)withPointerToParameterOf:(id)a0 named:(id)a1 block:(id /* block */)a2;

@end

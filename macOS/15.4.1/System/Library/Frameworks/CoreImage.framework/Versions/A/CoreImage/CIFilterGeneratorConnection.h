@interface CIFilterGeneratorConnection : NSObject {
    struct CIFilterGeneratorConnectionStruct { id x0; id x1; id x2; id x3; int x4; id x5; } *_generatorConnectionStruct;
}

+ (id)connectionWithSourceObject:(id)a0 sourceKey:(id)a1 targetObject:(id)a2 targetKey:(id)a3 userInfo:(id)a4;

- (void)dealloc;
- (id)description;
- (void)setType:(int)a0;
- (int)type;
- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (id)targetObject;
- (id)sourceObject;
- (id)initWithSourceObject:(id)a0 sourceKey:(id)a1 targetObject:(id)a2 targetKey:(id)a3 userInfo:(id)a4;
- (id)sourceKey;
- (id)targetKey;

@end

@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
+ (int)blipTypeForContentType:(id)a0;
+ (int)blipTypeForExtension:(id)a0;
+ (int)blipTypeForImageData:(id)a0;
+ (id)inflatedExtensionForGzippedExtension:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (int)index;
- (void)setIndex:(int)a0;
- (void)addEffect:(id)a0;
- (id)effects;
- (void)setEffects:(id)a0;
- (unsigned long long)effectCount;
- (BOOL)isNull;
- (id)blip;
- (id)effectAtIndex:(unsigned long long)a0;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
- (void)removeEffectAtIndex:(unsigned long long)a0;
- (void)setBlip:(id)a0;

@end

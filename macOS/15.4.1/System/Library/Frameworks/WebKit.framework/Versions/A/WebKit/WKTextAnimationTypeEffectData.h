@class NSUUID;

@interface WKTextAnimationTypeEffectData : NSObject {
    struct RetainPtr<NSUUID> { void *m_ptr; } _effectID;
}

@property (readonly, nonatomic) NSUUID *effectID;
@property (readonly, nonatomic) unsigned char type;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEffectID:(id)a0 type:(unsigned char)a1;

@end

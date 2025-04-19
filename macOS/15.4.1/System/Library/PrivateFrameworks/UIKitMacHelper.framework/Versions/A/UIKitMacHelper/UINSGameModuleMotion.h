@class UINSGameEventTranslator, UINSVirtualMotionDevice;

@interface UINSGameModuleMotion : UINSGameModule {
    UINSGameEventTranslator *_gameEventTranslator;
}

@property (weak) UINSVirtualMotionDevice *virtualMotionDevice;

- (void).cxx_destruct;
- (id)gameEventTranslator;
- (void)setGameEventTranslator:(id)a0;

@end

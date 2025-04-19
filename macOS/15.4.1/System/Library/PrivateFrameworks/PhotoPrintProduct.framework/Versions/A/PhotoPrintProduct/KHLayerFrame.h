@class KHFrame, NSString, NSBundle, KHThemeDatabase;

@interface KHLayerFrame : KHFrame {
    KHFrame *_parentFrame;
    NSString *_layerFrameKey;
    NSBundle *_themeBundle;
    KHThemeDatabase *_themeDatabase;
}

- (void)dealloc;
- (id)database;
- (id)attributes;
- (BOOL)isPersisted;
- (id)parentFrame;
- (id)treatment;
- (void)persist;
- (void)deleteModel;
- (void)setParentFrame:(id)a0;
- (id)themeDB;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2;
- (BOOL)enableDefaultLeading;
- (id)initWithParentFrame:(id)a0 masterTreatmentLayer:(id)a1 layerFrameKey:(id)a2;
- (id)layerFrameAttributeKeyFromParentKey:(id)a0;
- (id)layerFrameForKey:(id)a0;
- (id)layerFrameKey;
- (void)loadAttributes;
- (id)parentKeyFromLayerFrameAttributeKey:(id)a0;
- (id)parentLayout;
- (id)prototypeAttributeForKey:(id)a0;
- (void)setPrototypeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)themeBundle;
- (void)writeValue:(id)a0 toField:(id)a1;

@end

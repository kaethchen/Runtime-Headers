@class NSString;

@interface PXGSpriteDataStore : NSObject <PXGDiagnosticsProvider> {
    unsigned int _capacity;
}

@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) struct { unsigned int x0; } *entities;
@property (readonly, nonatomic) struct { struct { double x0; double x1; double x2; } x0; } *geometries;
@property (readonly, nonatomic) struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *styles;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *infos;
@property (nonatomic) struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; } sprites;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newSpriteDataStore;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void)clearEntities;
- (void)recycle;
- (struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })spritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (void)applyChangeDetails:(id)a0;
- (void)copySpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 fromSpriteDataStore:(id)a1;
- (void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)insertSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (void)moveSpritesFromIndexes:(struct __CFArray { } *)a0 toIndexes:(id)a1;
- (void)moveSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 toRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1;
- (void)removeSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;
- (struct { struct *x0; struct *x1; struct *x2; struct *x3; })spriteAtIndex:(unsigned int)a0;
- (id)spriteAtIndexes:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)spriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)spriteIndexesWithSpriteInfoFlags:(unsigned char)a0;
- (void)_collectSpriteIndexes:(id)a0 inRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct { struct *x0; struct *x1; struct *x2; struct *x3; })_mutableSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0;

@end

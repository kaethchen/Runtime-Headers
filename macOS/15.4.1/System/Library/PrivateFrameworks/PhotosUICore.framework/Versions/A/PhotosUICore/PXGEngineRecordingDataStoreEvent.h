@class NSIndexSet;

@interface PXGEngineRecordingDataStoreEvent : PXGTungstenRecordingEvent {
    struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *_styles;
    struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *_infos;
    struct { struct { double x0; double x1; double x2; } x0; } *_geometries;
    struct { unsigned int x0; } *_entities;
    struct { float x0; } *_textureInfos;
    unsigned int *_textureInfoSprites;
    NSIndexSet *_spriteIndexes;
    long long _textureInfoCount;
}

+ (id)eventWithTextures:(id)a0 dataStore:(id)a1 spriteIndexes:(id)a2 screenScale:(double)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTextures:(id)a0 dataStore:(id)a1 spriteIndexes:(id)a2 screenScale:(double)a3;
- (id)serializable;

@end

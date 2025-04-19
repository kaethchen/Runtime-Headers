@class QCPixelFormat;

@interface QCStreamProvider : NSObject <QCStreamProvider> {
    unsigned long long _identifier;
    unsigned long long _defaultWidth;
    unsigned long long _defaultHeight;
    unsigned long long _defaultDepth;
    void *_unused[4];
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long elementSize;
@property (readonly) unsigned long long pixelsWide;
@property (readonly) unsigned long long pixelsHigh;
@property (readonly) unsigned long long pixelsDeep;
@property (readonly) QCPixelFormat *pixelFormat;
@property (readonly) int type;
@property (readonly) BOOL supportsConversion;

+ (id)createProviderWithSource:(id)a0 options:(id)a1;
+ (BOOL)isCompatibleWithSource:(id)a0 sourceMD5:(struct { unsigned char x0[16]; } *)a1;

- (id)description;
- (id)init;
- (void)_setDefaultDepth:(unsigned long long)a0;
- (void)_setDefaultHeight:(unsigned long long)a0;
- (void)_setDefaultWidth:(unsigned long long)a0;
- (id)createArrayMemObjectForManager:(id)a0 withCount:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 options:(id)a4;
- (id)createImage2DMemObjectForManager:(id)a0 withFormat:(id)a1 options:(id)a2;
- (struct { unsigned char x0[16]; })providerMD5;
- (id)sourceRepresentation;
- (id)sourceRepresentationType;

@end

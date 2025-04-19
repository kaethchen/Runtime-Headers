@class QCPixelFormat;
@protocol QCStreamProvider;

@interface QCStream : QCStructure {
    id<QCStreamProvider> _provider;
}

@property (readonly) unsigned long long elementSize;
@property (readonly) unsigned long long pixelsWide;
@property (readonly) unsigned long long pixelsHigh;
@property (readonly) unsigned long long pixelsDeep;
@property (readonly) QCPixelFormat *pixelFormat;
@property (readonly) int type;

+ (void)initialize;
+ (unsigned long long)streamExporterRegistryTimestamp;
+ (id)createImageWithSource:(id)a0 options:(id)a1;
+ (void)registerStreamExporterClass:(Class)a0;
+ (void)registerStreamProviderClass:(Class)a0;
+ (id)streamExporterClasses;
+ (id)streamProviderClasses;
+ (id)streamWithStructure:(id)a0;

- (void)dealloc;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)provider;
- (id)dictionaryRepresentation;
- (id)_list;
- (id)QCArrayRepresentation;
- (struct __C3DGeometry { } *)C3DGeometryRepresentation;
- (id)QCMemObjectRepresentation;
- (void)_populateWithStream;
- (void)addMember:(id)a0 forKey:(id)a1;
- (id)arrayRepresentation;
- (id)createArrayMemObjectForManager:(id)a0 withCount:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 options:(id)a4;
- (id)createImage2DMemObjectForManager:(id)a0 withFormat:(id)a1 options:(id)a2;
- (id)createImage3DMemObjectForManager:(id)a0 options:(id)a1;
- (id)createQCArrayBufferObjectForManager:(id)a0 withTarget:(unsigned int)a1 count:(unsigned long long)a2 elementSize:(unsigned long long)a3 type:(int)a4 options:(id)a5;
- (id)createQCArrayForManager:(id)a0 withCount:(unsigned long long)a1 elementSize:(unsigned long long)a2 type:(int)a3 options:(id)a4;
- (id)createQCArrayTexture3DForManager:(id)a0 withWidth:(unsigned long long)a1 height:(unsigned long long)a2 depth:(unsigned long long)a3 options:(id)a4;
- (id)createRepresentationOfType:(id)a0 forManager:(id)a1 withCount:(unsigned long long)a2 elementSize:(unsigned long long)a3 type:(int)a4 options:(id)a5;
- (id)initWithArray:(id)a0 options:(id)a1;
- (id)initWithC3DGeometry:(struct __C3DGeometry { } *)a0 options:(id)a1;
- (id)initWithList:(id)a0 options:(id)a1;
- (id)initWithMemObject:(id)a0 options:(id)a1;
- (id)initWithProvider:(id)a0 options:(id)a1;
- (id)initWithStructure:(id)a0;
- (id)memberAtIndex:(unsigned long long)a0;
- (id)memberForKey:(id)a0;
- (void)removeAllMembers;
- (void)removeMemberAtIndex:(unsigned long long)a0;
- (void)removeMemberForKey:(id)a0;
- (void)replaceMemberAtIndex:(unsigned long long)a0 withMember:(id)a1;
- (void)setMember:(id)a0 forKey:(id)a1;

@end

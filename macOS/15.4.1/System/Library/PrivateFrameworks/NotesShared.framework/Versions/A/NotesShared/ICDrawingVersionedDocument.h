@class ICDrawing;

@interface ICDrawingVersionedDocument : ICTTVersionedDocument

@property (readonly, nonatomic) ICDrawing *drawing;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void).cxx_destruct;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)a0;

@end

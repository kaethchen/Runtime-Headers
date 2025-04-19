@class OKProducerPlugin, NSString, OKDocumentCanvas, OKMediaItem, OKDocument;

@interface OKDocumentGuideline : NSObject <NSCopying> {
    NSString *_mediaItemUniqueURLString;
    unsigned long long _documentCanvasType;
    NSString *_documentCanvasKeyPath;
    NSString *_producerPluginUUID;
}

@property (nonatomic) OKDocument *document;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) double timestamp;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) OKMediaItem *mediaItem;
@property (retain, nonatomic) OKProducerPlugin *producerPlugin;
@property (retain, nonatomic) OKDocumentCanvas *documentCanvas;

+ (id)globalUniqueKeyForKey:(id)a0;
+ (id)globalUniqueKeyForKey:(id)a0 mediaItem:(id)a1;
+ (id)guidelineWithType:(unsigned long long)a0 key:(id)a1 value:(id)a2;
+ (id)globalUniqueKeyForKey:(id)a0 documentCanvas:(id)a1;
+ (id)globalUniqueKeyForKey:(id)a0 mediaItem:(id)a1 documentCanvas:(id)a2 producerPlugin:(id)a3;
+ (id)globalUniqueKeyForKey:(id)a0 producerPlugin:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)globalUniqueKey;
- (id)initWithType:(unsigned long long)a0 key:(id)a1 value:(id)a2;
- (id)documentCanvasKeyPath;

@end

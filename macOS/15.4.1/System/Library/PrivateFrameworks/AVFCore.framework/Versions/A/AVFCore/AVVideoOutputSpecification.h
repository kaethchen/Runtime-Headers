@class NSArray, NSDictionary, AVVideoOutputSettings, NSMutableDictionary;
@protocol AVDecodedVideoSettingsForFig;

@interface AVVideoOutputSpecification : NSObject <NSCopying> {
    NSArray *_tagCollections;
    AVVideoOutputSettings<AVDecodedVideoSettingsForFig> *_defaultOutputSettings;
    NSMutableDictionary *_tagCollectionToOutputSettingsMapping;
}

@property (readonly, copy, nonatomic) NSArray *preferredTagCollections;
@property (copy, nonatomic) NSDictionary *defaultPixelBufferAttributes;
@property (copy, nonatomic) NSDictionary *defaultOutputSettings;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_allowWideColorForTagCollection:(struct OpaqueCMTagCollection { } *)a0;
- (id)_outputSettingsForTagCollection:(struct OpaqueCMTagCollection { } *)a0;
- (id)_pixelBufferAttributesForTagCollection:(struct OpaqueCMTagCollection { } *)a0;
- (id)_videoColorPropertiesForTagCollection:(struct OpaqueCMTagCollection { } *)a0;
- (id)_videoOutputSettingsFromDictionaryRepresentation:(id)a0 exceptionReason:(id *)a1;
- (id)initWithTagCollections:(id)a0;
- (void)setOutputPixelBufferAttributes:(id)a0 forTagCollection:(struct OpaqueCMTagCollection { } *)a1;
- (void)setOutputSettings:(id)a0 forTagCollection:(struct OpaqueCMTagCollection { } *)a1;

@end

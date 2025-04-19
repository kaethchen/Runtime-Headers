@class NSString, NSURL, INFile, PHAsset;

@interface INSendMessageAttachment : NSObject <INEnumerable, INJSONSerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL currentLocation;
@property (readonly, copy) INFile *file;
@property (readonly, copy) NSURL *speechDataURL;
@property (readonly, copy) NSURL *sharedLink;
@property (readonly, copy) NSString *phAssetId;
@property (readonly) PHAsset *phAsset;
@property (readonly, copy) INFile *audioMessageFile;

+ (BOOL)supportsSecureCoding;
+ (id)attachmentWithAudioMessageFile:(id)a0;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
+ (id)attachmentWithCurrentLocation;
+ (id)attachmentWithFile:(id)a0;
+ (id)attachmentWithPHAsset:(id)a0;
+ (id)attachmentWithPHAssetId:(id)a0;
+ (id)attachmentWithSharedLink:(id)a0;
+ (id)attachmentWithSpeechDataURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_initWithCurrentLocation:(BOOL)a0 file:(id)a1 speechDataURL:(id)a2 audioMessageFile:(id)a3 sharedLink:(id)a4 phAssetId:(id)a5;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;

@end

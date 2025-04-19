@class NSString, LPAudioProperties, NSData, AVURLAsset, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, LPCodable, NSSecureCoding> {
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    LPAudioProperties *_properties;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) AVURLAsset *_asset;
@property (retain, nonatomic) NSURL *fileURL;
@property (readonly, retain, nonatomic) NSURL *streamingURL;
@property (readonly, copy, nonatomic) LPAudioProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) BOOL _canEncodeWithoutComputation;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (id)_initWithAudio:(id)a0;
- (BOOL)_isSubstitute;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initWithStreamingURL:(id)a0 properties:(id)a1;

@end

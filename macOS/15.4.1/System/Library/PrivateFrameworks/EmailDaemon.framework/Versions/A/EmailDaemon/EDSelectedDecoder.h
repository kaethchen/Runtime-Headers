@class NSString;
@protocol MEMessageDecoder_Private;

@interface EDSelectedDecoder : NSObject

@property (readonly, nonatomic) NSString *decoderID;
@property (readonly, nonatomic) id<MEMessageDecoder_Private> decoder;

- (void).cxx_destruct;
- (id)initWithDecoderID:(id)a0 decoder:(id)a1;

@end

@class MLMultiArray;

@interface CSUSmileySpotterModelInput : NSObject

@property (readonly) MLMultiArray *textEncoding;
@property (readonly) long long textEncoderrevision;

- (void).cxx_destruct;
- (id)initWithTextEncoding:(id)a0 TextEncoderRevision:(long long)a1;

@end

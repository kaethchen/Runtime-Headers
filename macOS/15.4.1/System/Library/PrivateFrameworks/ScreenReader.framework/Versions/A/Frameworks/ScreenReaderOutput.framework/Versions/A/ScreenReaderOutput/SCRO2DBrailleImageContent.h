@class NSString, NSData;

@interface SCRO2DBrailleImageContent : NSObject <SCRO2DBrailleContentProtocol> {
    NSData *_imageData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)panLeft;
- (BOOL)canPanLeft;
- (BOOL)canPanRight;
- (void)drawOnCanvas:(id)a0;
- (id)initWithBrailleData:(id)a0 canvas:(id)a1;
- (void)panRight;

@end

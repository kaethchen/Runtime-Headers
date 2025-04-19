@interface SwiftUI.RBDisplayListDecoderDelegate : NSObject <RBDecoderDelegate> {
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (struct CGFont { } *)decodedCGFontWithData:(id)a0 error:(id *)a1;
- (id)decodedImageContentsWithData:(id)a0 type:(int *)a1 error:(id *)a2;

@end

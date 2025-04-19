@class DRCDTextBlock, NSMutableData;

@interface DRSessionCDTextProducer : NSObject {
    DRCDTextBlock *_cdText;
    NSMutableData *_packData;
    unsigned long long _pwIndex;
    unsigned long long _pwSize;
}

- (void)dealloc;
- (BOOL)prepareSession:(id)a0 forBurn:(id)a1 toMedia:(id)a2;
- (id)initWithCDText:(id)a0;
- (void)cleanupSessionAfterBurn:(id)a0;
- (void)expandPackData;
- (unsigned int)produceLeadInForSession:(id)a0 intoBuffer:(char *)a1 length:(unsigned int)a2 atAddress:(unsigned long long)a3 ioFlags:(unsigned int *)a4;

@end

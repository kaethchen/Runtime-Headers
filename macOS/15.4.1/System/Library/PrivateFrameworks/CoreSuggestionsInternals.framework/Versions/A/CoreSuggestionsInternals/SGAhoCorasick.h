@class NSData;

@interface SGAhoCorasick : NSObject {
    NSData *_bytecode;
    unsigned short _endPtr;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)existsInString:(id)a0;
- (id)initWithBytecode:(id)a0;

@end

@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject {
    ICSPushbackStream *_data;
    NSMutableData *_token;
    int _tokenType;
    int _expectedNextTokenType;
}

@property BOOL printedICS;
@property int logCount;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)currentToken;
- (int)tokenType;
- (BOOL)consumeEscaped:(const char *)a0;
- (void)consumePropName;
- (BOOL)consumeChar:(char)a0;
- (BOOL)consumeEOL;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropValue;
- (void)consumeWhiteSpace;
- (id)initWithCompressedData:(id)a0;
- (id)nextToken;

@end

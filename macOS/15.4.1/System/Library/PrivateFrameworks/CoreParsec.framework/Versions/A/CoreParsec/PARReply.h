@class NSArray, NSURLResponse, NSData, NSURLRequest, PARTask;

@interface PARReply : NSObject <NSSecureCoding> {
    NSArray *_rawResponse;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLRequest *httpRequest;
@property (retain, nonatomic) NSURLResponse *httpResponse;
@property (retain, nonatomic) NSArray *rawResponse;
@property (retain, nonatomic) NSData *data;
@property (weak, nonatomic) PARTask *task;
@property (nonatomic) double scale;
@property (nonatomic) int replyType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

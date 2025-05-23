@class NSURLRequest, NSURL, NSURLResponse;

@interface NEFilterBrowserFlow : NEFilterFlow <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURLRequest *request;
@property (retain) NSURLResponse *response;
@property (retain) NSURL *parentURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)createDataCompleteReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createDataReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createNewFlowReply:(id)a0 controlSocket:(int)a1 verdict:(id)a2 context:(id)a3;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end

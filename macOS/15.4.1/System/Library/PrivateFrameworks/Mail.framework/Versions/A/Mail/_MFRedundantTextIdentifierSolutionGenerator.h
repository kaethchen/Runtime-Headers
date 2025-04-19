@class NSDictionary;

@interface _MFRedundantTextIdentifierSolutionGenerator : NSObject

@property (readonly, nonatomic) struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *replyBuffer;
@property (readonly, nonatomic) struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *originalBuffer;
@property (readonly, nonatomic) long long replyLength;
@property (readonly, nonatomic) long long originalLength;
@property (readonly, copy, nonatomic) NSDictionary *originalAttachmentContextsByURL;
@property (readonly, copy, nonatomic) NSDictionary *replyAttachmentContextsByURL;

- (id)init;
- (void).cxx_destruct;
- (id)generateBestSolution;
- (id)generateBestSolutionInForwardDirection:(BOOL)a0 replyStartIndex:(long long)a1 originalStartIndex:(long long)a2;
- (id)initWithReply:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *)a0 replyLength:(long long)a1 replyAttachmentContextsByURL:(id)a2 original:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *)a3 originalLength:(long long)a4 originalAttachmentContextsByURL:(id)a5;

@end

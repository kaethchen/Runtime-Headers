@class TICandidateRequestToken;

@interface _NSTextCompletionContext : NSObject

@property (retain, nonatomic) TICandidateRequestToken *requestToken;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) long long sequenceNumber;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 offset:(unsigned long long)a1 sequenceNumber:(long long)a2 requestToken:(id)a3 completionHandler:(id /* block */)a4;

@end

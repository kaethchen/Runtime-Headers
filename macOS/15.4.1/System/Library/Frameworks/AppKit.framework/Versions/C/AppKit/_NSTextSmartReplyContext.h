@class TICandidateRequestToken, TIInputContextHistory;

@interface _NSTextSmartReplyContext : NSObject

@property (retain, nonatomic) TICandidateRequestToken *requestToken;
@property (copy, nonatomic) TIInputContextHistory *history;

- (void).cxx_destruct;
- (id)initWithRequestToken:(id)a0 history:(id)a1;

@end

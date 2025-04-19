@class CHSynthesisRequestOptions, NSString, CHDrawing;

@interface CHRemoteSynthesisRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CHDrawing *drawing;
@property (readonly, copy, nonatomic) CHSynthesisRequestOptions *options;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) long long priority;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 drawing:(id)a1 options:(id)a2 requestType:(long long)a3;
- (id)initWithString:(id)a0 drawing:(id)a1 options:(id)a2 requestType:(long long)a3 priority:(long long)a4;

@end

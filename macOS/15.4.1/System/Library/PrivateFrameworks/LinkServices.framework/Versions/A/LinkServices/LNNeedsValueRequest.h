@class LNDialog, NSUUID, NSString, LNViewSnippet;

@interface LNNeedsValueRequest : LNRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) LNDialog *dialog;
@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (void)respondWithValue:(id)a0;
- (id)initWithIdentifier:(id)a0 parameterName:(id)a1 dialog:(id)a2 viewSnippet:(id)a3;
- (void)respondWithUpdates:(id)a0;

@end

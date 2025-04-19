@class NSUUID, LNConfirmationSystemStyle, LNSuccessResult;

@interface LNActionConfirmationRequest : LNRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) LNConfirmationSystemStyle *systemStyle;
@property (readonly, copy, nonatomic) LNSuccessResult *result;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (void)respondWithConfirmation:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 systemStyle:(id)a1 result:(id)a2;
- (void)respondWithUpdates:(id)a0;

@end

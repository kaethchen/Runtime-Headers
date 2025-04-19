@class NSUUID, _SWActionResponse;
@protocol _SWActionResponseHandler;

@interface SWAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL hasSentResponse;
@property (retain, nonatomic) _SWActionResponse *response;
@property (weak, nonatomic) id<_SWActionResponseHandler> responseHandler;
@property (copy, nonatomic) id /* block */ responseHandlerBlock;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fail;
- (void)fulfill;
- (BOOL)isEqualToAction:(id)a0;
- (void)_processResponse;
- (void)failWithResponse:(id)a0;
- (void)fulfillWithResponse:(id)a0;

@end

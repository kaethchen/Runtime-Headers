@class NSString;

@interface SLShareableContentAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (id)actionWithData:(id)a0 targetingSceneIdentifier:(id)a1 responseHandler:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)failWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fail;
- (void)fulfillWithResponse:(id)a0;
- (id)initWithSceneIdentifier:(id)a0 responseHandler:(id /* block */)a1;

@end

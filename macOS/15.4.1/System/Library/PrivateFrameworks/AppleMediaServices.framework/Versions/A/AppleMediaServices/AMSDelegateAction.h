@class NSString, NSDictionary;

@interface AMSDelegateAction : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *parameters;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)actionPayload;
- (id)initWithDialogAction:(id)a0;

@end

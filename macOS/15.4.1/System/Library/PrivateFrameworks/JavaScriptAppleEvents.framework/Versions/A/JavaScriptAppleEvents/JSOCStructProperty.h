@class NSString, JSOCType;

@interface JSOCStructProperty : NSObject

@property (readonly) NSString *label;
@property (readonly) JSOCType *type;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 type:(id)a1;

@end

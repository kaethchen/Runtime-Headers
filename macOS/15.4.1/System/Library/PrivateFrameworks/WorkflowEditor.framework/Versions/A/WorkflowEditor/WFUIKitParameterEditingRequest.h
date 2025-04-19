@class NSString;
@protocol WFParameterState;

@interface WFUIKitParameterEditingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *parameterClassName;
@property (readonly, nonatomic) id<WFParameterState> currentState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterClassName:(id)a0 currentState:(id)a1;

@end

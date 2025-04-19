@class NSString;
@protocol WFParameterState;

@interface WFInputtedState : NSObject

@property (copy, nonatomic) NSString *parameterKey;
@property (retain, nonatomic) id<WFParameterState> parameterState;

- (void).cxx_destruct;
- (id)initWithParameterKey:(id)a0 parameterState:(id)a1;

@end

@class NSString;
@protocol WFParameterState;

@interface WFAddButtonParameterStateUpdate : NSObject

@property (readonly, nonatomic) NSString *parameterKey;
@property (readonly, nonatomic) id<WFParameterState> parameterState;

- (void).cxx_destruct;
- (id)initWithParameterKey:(id)a0 parameterState:(id)a1;

@end

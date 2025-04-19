@class NSDictionary, NSString;

@interface HKStateMachineState : NSObject

@property (copy, nonatomic) NSDictionary *incomingTransitions;
@property (copy, nonatomic) NSDictionary *outgoingTransitions;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *label;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIndex:(long long)a0 label:(id)a1;

@end

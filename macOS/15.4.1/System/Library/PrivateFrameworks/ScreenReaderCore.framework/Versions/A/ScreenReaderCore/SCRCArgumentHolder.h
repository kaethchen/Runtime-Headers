@class NSString;

@interface SCRCArgumentHolder : NSObject

@property (readonly, copy, nonatomic) NSString *option;
@property (copy, nonatomic) NSString *argument;
@property (readonly, copy, nonatomic) NSString *argumentDescription;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) BOOL required;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (BOOL)process;
- (id)initWithArgument:(id)a0 option:(id)a1 description:(id)a2 target:(id)a3 action:(SEL)a4 required:(BOOL)a5;

@end

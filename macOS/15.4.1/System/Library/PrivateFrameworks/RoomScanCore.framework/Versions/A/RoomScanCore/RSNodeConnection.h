@class RSNodeOutput, RSNodeInput, NSString;

@interface RSNodeConnection : NSObject <RSNodeOutputConsumer, RSNodeInputProducer>

@property (readonly, weak, nonatomic) RSNodeOutput *output;
@property (readonly, weak, nonatomic) RSNodeInput *input;
@property (readonly, nonatomic, getter=isAttached) BOOL attached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)consumeMessage:(id)a0 fromOutput:(id)a1;
- (BOOL)attachWithError:(id *)a0;
- (id)initWithOutput:(id)a0 input:(id)a1;
- (BOOL)detachWithError:(id *)a0;

@end

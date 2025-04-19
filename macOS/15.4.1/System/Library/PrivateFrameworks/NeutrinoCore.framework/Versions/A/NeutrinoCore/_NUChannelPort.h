@class NSString, NSArray, NUChannel, _NUPipeline, NSHashTable;
@protocol NUPipelineNode;

@interface _NUChannelPort : NSObject <NUChannelPort> {
    NSHashTable *_outputPorts;
    NSHashTable *_subports;
}

@property (nonatomic) _NUPipeline *pipeline;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id<NUPipelineNode> node;
@property (retain, nonatomic) _NUChannelPort *inputPort;
@property (readonly, nonatomic) NSArray *outputPorts;
@property (nonatomic) _NUChannelPort *superport;
@property (readonly, nonatomic) _NUChannelPort *rootPort;
@property (readonly, nonatomic) NSArray *subports;
@property (readonly, nonatomic) NSString *compactDescription;
@property (readonly, nonatomic) NUChannel *channel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;
- (id)evaluate:(out id *)a0;
- (void)_addOutputPort:(id)a0;
- (void)_removeOutputPort:(id)a0;
- (BOOL)bindTo:(id)a0 error:(out id *)a1;
- (id)subportForKey:(id)a0;

@end

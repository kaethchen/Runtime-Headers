@class EXSGraphSyncProtocol, GraphAPIBinding;

@interface EXSGraphOperation : NSObject

@property (weak, nonatomic) EXSGraphSyncProtocol *protocol;
@property (readonly, weak, nonatomic) GraphAPIBinding *bindingForData;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)initWithProtocol:(id)a0 andBinding:(id)a1;

@end

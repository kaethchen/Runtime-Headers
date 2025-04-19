@class NSString, NSURL;

@interface DeviceErrorNode : NSObject

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *explanation;
@property (retain, nonatomic) NSURL *url;
@property (weak, nonatomic) DeviceErrorNode *parentNode;

+ (id)node;
+ (id)detailNodesWithErrorDictionary:(id)a0 parent:(id)a1;
+ (id)nodeWithErrorDictionary:(id)a0;
+ (id)nodeWithMessage:(id)a0 explantion:(id)a1 url:(id)a2 parentNode:(id)a3;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 explantion:(id)a1 url:(id)a2 parentNode:(id)a3;

@end

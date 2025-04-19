@class NSString, HTTPServer, NSObject;
@protocol OS_dispatch_queue;

@interface HTTPConfig : NSObject

@property (readonly, nonatomic) HTTPServer *server;
@property (readonly, nonatomic) NSString *documentRoot;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 documentRoot:(id)a1;
- (id)initWithServer:(id)a0 documentRoot:(id)a1 queue:(id)a2;

@end

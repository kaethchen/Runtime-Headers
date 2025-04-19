@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface QLThumbnailConnectionHandler : NSObject <_EXMainConnectionHandler, QLThumbnailService>

@property (retain, nonatomic) id principalObject;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostXPCInterface;
+ (id)serviceXPCInterface;

@end

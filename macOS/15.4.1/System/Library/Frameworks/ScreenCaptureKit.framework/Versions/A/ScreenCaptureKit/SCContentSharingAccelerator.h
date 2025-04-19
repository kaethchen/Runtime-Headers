@interface SCContentSharingAccelerator : NSObject

+ (void)addApplicationForWindowID:(unsigned int)a0 toStream:(id)a1 completionHandler:(id /* block */)a2;
+ (id)addWindow:(id)a0 withStreamInfo:(id)a1 shareableContent:(id)a2;
+ (void)addWindowID:(unsigned int)a0 toStream:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getAllActiveShareableDestinations:(unsigned int)a0 completionHandler:(id /* block */)a1;
+ (id)getWindowFromWindowID:(unsigned int)a0 shareableContent:(id)a1;
+ (void)removeApplicationForWindowID:(unsigned int)a0 fromStream:(id)a1 completionHandler:(id /* block */)a2;
+ (void)removeWindowID:(unsigned int)a0 fromStream:(id)a1 completionHandler:(id /* block */)a2;
+ (void)replaceApplicationForWindowID:(unsigned int)a0 onStream:(id)a1 completionHandler:(id /* block */)a2;
+ (void)replaceExistingWindowID:(unsigned int)a0 withWindowID:(unsigned int)a1 onStream:(id)a2 completionHandler:(id /* block */)a3;
+ (void)replaceWindowID:(unsigned int)a0 onStream:(id)a1 completionHandler:(id /* block */)a2;
+ (void)startSharingApplicationForWindowID:(unsigned int)a0 picker:(id)a1 completionHandler:(id /* block */)a2;
+ (void)startSharingWindowID:(unsigned int)a0 forApp:(BOOL)a1 picker:(id)a2 completionHandler:(id /* block */)a3;
+ (void)startSharingWindowID:(unsigned int)a0 picker:(id)a1 completionHandler:(id /* block */)a2;
+ (void)stopStream:(id)a0 completionHandler:(id /* block */)a1;

@end

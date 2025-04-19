@interface iMessageUtilities : NSObject

+ (BOOL)isAvailable;
+ (void)sendMessage:(id)a0 to:(id)a1;
+ (void)canMessageDestination:(id)a0 completionHandler:(id /* block */)a1;

@end

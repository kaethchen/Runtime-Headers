@class FIFinderSync, NSString, NSXPCInterface, NSURL;

@interface FIExtensionContextXPCListenerDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) FIFinderSync *context;
@property (retain, nonatomic) NSXPCInterface *interface;
@property (retain, nonatomic) id exportedObject;
@property (copy, nonatomic) NSURL *itemURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

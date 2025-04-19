@class NSString;

@interface UVCInterfaceConfiguration : NSObject <UVCConfiguration>

@property (readonly) unsigned long long vendorID;
@property (readonly) unsigned long long productID;
@property (readonly) unsigned long long interfaceNumber;
@property (readonly) long long pipeIdlePolicy;
@property (readonly) long long interfaceIdlePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

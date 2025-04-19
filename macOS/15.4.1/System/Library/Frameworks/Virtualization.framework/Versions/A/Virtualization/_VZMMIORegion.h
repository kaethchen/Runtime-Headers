@class NSString;

@interface _VZMMIORegion : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) unsigned long long baseAddress;
@property (readonly) unsigned long long length;
@property (readonly) BOOL writeSynchronously;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

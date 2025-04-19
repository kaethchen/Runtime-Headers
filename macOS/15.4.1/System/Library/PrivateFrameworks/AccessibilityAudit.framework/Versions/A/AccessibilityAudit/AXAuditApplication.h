@class AXAuditPSN, NSString, NSImage;

@interface AXAuditApplication : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) AXAuditPSN *psnObj;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSImage *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

@end

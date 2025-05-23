@class AXAuditElement, NSArray, NSString;

@interface AXAuditNode : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) AXAuditElement *auditElement;
@property (retain, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *humanReadableDescription;
@property (copy, nonatomic) NSString *humanReadableRoleDescription;
@property (copy, nonatomic) NSString *className;
@property (nonatomic) BOOL isIgnored;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_printDescendantsWithLevel:(unsigned long long)a0;
- (void)debugPrintDescendants;
- (id)initWithAuditElement:(id)a0 description:(id)a1 roleDescription:(id)a2;

@end

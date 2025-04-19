@class AXAuditElement, NSArray, NSString;

@interface AXAuditInspectorFocus : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) AXAuditElement *element;
@property (retain, nonatomic) NSArray *inspectorSections;
@property (copy, nonatomic) NSString *captionText;
@property (copy, nonatomic) NSString *spokenDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

@end

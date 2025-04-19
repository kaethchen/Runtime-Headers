@class NSString, NSMutableArray, NSArray;

@interface AXAuditInspectorSection : NSObject <AXAuditTransportableObjectProtocol>

@property (retain, nonatomic) NSMutableArray *_elementAttributes;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSArray *elementAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0;
- (id)addAttribute:(id)a0 performsAction:(BOOL)a1 humanReadable:(id)a2 settable:(BOOL)a3 valueType:(long long)a4 isInternal:(BOOL)a5;
- (id)elementAttributes;

@end

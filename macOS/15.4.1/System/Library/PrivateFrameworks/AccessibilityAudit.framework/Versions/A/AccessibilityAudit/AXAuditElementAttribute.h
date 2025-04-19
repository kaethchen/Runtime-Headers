@class NSString;

@interface AXAuditElementAttribute : NSObject <AXAuditTransportableObjectProtocol>

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *developerAPISelector;
@property (copy, nonatomic) NSString *humanReadableName;
@property (nonatomic, getter=isSettable) BOOL settable;
@property (nonatomic) BOOL performsAction;
@property (nonatomic) BOOL isSupported;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) BOOL displayInline;
@property (nonatomic) BOOL displayAsTree;
@property (nonatomic) long long valueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

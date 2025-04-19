@class NSString;

@interface EWSRequestAttachmentIdType : EWSBaseItemIdType <XSDefinitionProvider>

@property (copy, nonatomic) NSString *Id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)definition;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

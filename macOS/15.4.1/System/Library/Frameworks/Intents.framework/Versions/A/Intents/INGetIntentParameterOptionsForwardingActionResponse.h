@class NSData;

@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedObjectCollection;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArchivedObjectCollection:(id)a0 error:(id)a1;

@end

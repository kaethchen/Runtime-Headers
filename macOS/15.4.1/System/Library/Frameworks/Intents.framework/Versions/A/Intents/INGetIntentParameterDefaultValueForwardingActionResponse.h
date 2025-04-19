@class NSData;

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedDefaultValue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArchivedDefaultValue:(id)a0 error:(id)a1;

@end

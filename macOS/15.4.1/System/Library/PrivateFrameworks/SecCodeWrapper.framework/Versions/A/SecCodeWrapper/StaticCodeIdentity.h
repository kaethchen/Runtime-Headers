@interface StaticCodeIdentity : CodeIdentity

@property (readonly) struct __SecCode { } *staticCodeRef;

+ (id)codeIdentityOfApplicationAtURL:(id)a0;
+ (id)codeIdentityOfApplicationAtURL:(id)a0 error:(id *)a1;
+ (unsigned int)minimalValidationFlags;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithSecStaticCodeRef:(struct __SecCode { } *)a0;
- (BOOL)validateWithFlags:(unsigned int)a0 additionalRequirement:(id)a1 error:(id *)a2;

@end

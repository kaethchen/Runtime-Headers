@class NSString, SAMLAuthNRequestElement, NSData;

@interface SAMLAuthNRequest : XMLWrapperDoc {
    NSData *_schemaData;
}

@property (retain, nonatomic) SAMLAuthNRequestElement *requestElement;
@property (copy, nonatomic) NSString *issuer;

- (void).cxx_destruct;
- (void)setProviderName:(id)a0;
- (id)initWithData:(id)a0 schema:(id)a1 error:(id *)a2;
- (id)initWithElement:(id)a0 schema:(id)a1 error:(id *)a2;
- (void)setForceAuthN:(BOOL)a0;
- (void)setIsPassive:(BOOL)a0;
- (void)setSubjectFromResponse:(id)a0;

@end

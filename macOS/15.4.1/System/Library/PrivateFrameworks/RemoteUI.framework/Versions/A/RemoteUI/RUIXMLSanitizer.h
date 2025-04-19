@interface RUIXMLSanitizer : NSObject {
    void /* unknown type, empty encoding */ options;
}

- (id)init;
- (id)sanitizedDataWithElement:(id)a0 error:(id *)a1;
- (id)logStringWithXMLString:(id)a0 error:(id *)a1;
- (id)sanitizedXML:(id)a0 error:(id *)a1;
- (id)sanitizedXMLElementWithData:(id)a0 error:(id *)a1;

@end

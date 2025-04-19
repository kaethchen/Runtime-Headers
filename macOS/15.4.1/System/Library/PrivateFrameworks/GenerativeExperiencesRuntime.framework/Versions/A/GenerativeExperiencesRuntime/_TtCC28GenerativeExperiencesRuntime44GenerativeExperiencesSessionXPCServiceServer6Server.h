@interface _TtCC28GenerativeExperiencesRuntime44GenerativeExperiencesSessionXPCServiceServer6Server : NSObject <GenerativeExperiencesSessionXPCProtocol> {
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ clientProcessIdentifier;
    void /* unknown type, empty encoding */ dataSource;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestWithUuid:(id)a0;
- (void)completeStreamWithConfiguration:(id)a0 query:(id)a1 template:(id)a2 bindingVariables:(id)a3 documents:(id)a4 tools:(id)a5 toolChoice:(id)a6 parameters:(id)a7 schema:(id)a8 promptSanitizer:(id)a9 responseSanitizer:(id)a10 clientRequestID:(id)a11 requestUUID:(id)a12 delegate:(id)a13;
- (void)completeWithConfiguration:(id)a0 query:(id)a1 template:(id)a2 bindingVariables:(id)a3 documents:(id)a4 tools:(id)a5 toolChoice:(id)a6 parameters:(id)a7 schema:(id)a8 promptSanitizer:(id)a9 responseSanitizer:(id)a10 clientRequestID:(id)a11 requestUUID:(id)a12 delegate:(id)a13;
- (void)registerWithConfiguration:(id)a0 documents:(id)a1 requestUUID:(id)a2 delegate:(id)a3;
- (void)terminateSessionFor:(id)a0;

@end

@class NSData, NSSet;

@interface PKWebServiceLoggableRequestBody : NSObject {
    NSData *_body;
    NSSet *_sensitiveKeys;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)_descriptionIncludingPrivateFields:(BOOL)a0;
- (void)_redactLogsFromJSONObject:(id)a0;
- (id)initWithBody:(id)a0 sensitiveKeys:(id)a1;

@end

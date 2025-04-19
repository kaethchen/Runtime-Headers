@interface CKDTrafficLogParser : NSObject {
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)consumeParsedTrafficLogsAndReturnError:(id *)a0;
- (BOOL)parse:(id)a0 error:(id *)a1;

@end

@interface IMDPlainTextTapbackInterpreter : NSObject {
    void /* unknown type, empty encoding */ state;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)interpretMessageItem:(id)a0 inChat:(id)a1;

@end

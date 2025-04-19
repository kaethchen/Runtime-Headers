@interface CopresenceCore.ChangeHistoryProcessor : NSObject <CNChangeHistoryEventVisitor> {
    void /* unknown type, empty encoding */ onContactDeleted;
}

- (id)init;
- (void).cxx_destruct;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;

@end

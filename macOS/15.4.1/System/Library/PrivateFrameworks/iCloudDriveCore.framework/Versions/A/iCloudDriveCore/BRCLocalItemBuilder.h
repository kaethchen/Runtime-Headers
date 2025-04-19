@class BRCAccountSession;

@interface BRCLocalItemBuilder : NSObject {
    BRCAccountSession *_session;
}

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)newLocalItemFromPQLResultSet:(id)a0 error:(id *)a1;
- (id)newZoneRootWithItemID:(id)a0;

@end

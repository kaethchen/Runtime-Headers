@class NSString, GSPermanentStorage, NSObject;
@protocol GSAdditionStoring;

@interface GSSystemManagedLibrary : NSObject <GSLibraryProtocol> {
    GSPermanentStorage *_ps;
    NSString *_clientID;
}

@property (readonly, nonatomic) NSObject<GSAdditionStoring> *storage;
@property (readonly, nonatomic) NSString *nameSpace;

- (void).cxx_destruct;
- (BOOL)generationsRemove:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 clientID:(id)a1 error:(id *)a2;

@end

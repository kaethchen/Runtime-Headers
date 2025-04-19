@class CNContactStore, CNContact, NSURL, NSObject;
@protocol OS_os_log;

@interface CNDraggingContact : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSURL *cachedFileURLRepresentation;

+ (id)availableDataRepresentationTypes;

- (void).cxx_destruct;
- (void)cleanupFileURLRepresentation;
- (id)dataRepresentationForType:(id)a0;
- (id)fetchContactWithKeys:(id)a0;
- (id)fileNameForContact:(id)a0;
- (id)fileURLRepresentation;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (id)serializeContactToVCard:(id)a0;

@end
